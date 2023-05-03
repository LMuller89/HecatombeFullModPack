class HEC_Box extends ItemBase
{
    override void SetActions()
    {
        super.SetActions();
        AddAction(ActionTogglePlaceObject);
        AddAction(ActionPlaceObject);
    }

    override bool IsDeployable()
    {
        return true;
    }

    override bool CanPutInCargo(EntityAI parent)
    {
        if (!super.CanPutInCargo(parent))
            return false;

        if (GetNumberOfItems() == 0)
            return true;

        // Verificar se o Savage Safekeep está no chão e não tem pai
        if (!GetHierarchyRoot() && !GetHierarchyParent())
            return true;

        return false;
    }

    override bool CanPutIntoHands(EntityAI parent)
    {
        if (!super.CanPutIntoHands(parent))
            return false;

        if (GetNumberOfItems() == 1)
            return true;

        // Verificar se o Savage Safekeep está no chão e não tem pai
        if (!GetHierarchyRoot() && !GetHierarchyParent())
            return true;

        return false;
    }
}