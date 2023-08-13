modded class MissionGameplay
{
	
	override void OnUpdate(float timeslice)
    {        
        super.OnUpdate(timeslice); 
	
		if (GetGame().GetInput().LocalPress("UATurbo")) 
		{
			GetUApi().GetInputByName("UAWalkRunTemp").Lock();
			GetUApi().GetInputByName("UAWalkRunToggle").Lock();
		}
		
		if (GetGame().GetInput().LocalRelease("UATurbo"))
		{
			GetUApi().GetInputByName("UAWalkRunTemp").Unlock();
			GetUApi().GetInputByName("UAWalkRunToggle").Unlock();
		}

		if (GetGame().GetInput().LocalPress("UAWalkRunTemp") || GetGame().GetInput().LocalPress("UAWalkRunToggle"))
		{
			GetUApi().GetInputByName("UATurbo").Lock();
		}
		
		if (GetGame().GetInput().LocalRelease("UAWalkRunTemp") || GetGame().GetInput().LocalRelease("UAWalkRunToggle"))
		{
			GetUApi().GetInputByName("UATurbo").Unlock();
		}
		
	}
	
};