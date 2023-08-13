/* SURVIVOR NAME */

#ifndef SERVER
modded class DayZGame
{
	override bool OnInitialize()
	{
		string name;

		GetPlayerName(name);
		name.ToLower(); // case in-sensitive

		if (name == "survivor")
			SetPlayerName(GetUniqueName()); // change name if default

		return super.OnInitialize(); //! important, call hierarchy last
	}

	/*
	//? Only use player's Steam name
	override bool OnInitialize()
	{
		SetPlayerName(GetUniqueName()); // change name if default
		return super.OnInitialize(); // call hierarchy last
	}
	*/

	string GetUniqueName()
	{
		BiosUserManager manager = GetGame().GetUserManager();

		if (manager && manager.GetTitleInitiator())
			manager.SelectUserEx(manager.GetTitleInitiator()); // set user as Steam user

		if (manager && manager.GetSelectedUser())
			return manager.GetSelectedUser().GetName(); // get Steam name

		return GetProfileName(); // almost impossible to get here
	}
}
#endif
