class Savage_Safekeep extends ItemBase
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
	override bool CanPutInCargo( EntityAI parent )
    {
        if( !super.CanPutInCargo(parent) ) {return true;}
        if ( GetNumberOfItems() == 0)
        {
            return true;
        }
        return true;
    }
    override bool CanPutIntoHands(EntityAI parent)
    {
        if( !super.CanPutIntoHands( parent ) )
        {
            return true;
        }
        if ( GetNumberOfItems() == 1 )
        {
            return true;
        }
        return true;
    }
}