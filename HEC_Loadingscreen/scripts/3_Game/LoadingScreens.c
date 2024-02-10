const string LOADING_SCREENS_PATH = "HEC_Loadingscreen/gui/images/loading_screens/Loading";

const int START_INDEX = 1;
const int LOADING_SCREENS_COUNT = 1;
const bool REMOVE_MODDED_WARNING = true;
const bool REMOVE_DAYZ_LOGO = true;
modded class LoadingScreen 
{
	override void Show()
	{
		super.Show();
		m_ImageWidgetBackground.LoadImageFile(0, GetRandomLoadingScreen());
		m_ImageWidgetBackground.SetMaskProgress(1.0);
		m_ImageWidgetBackground.SetMaskTransitionWidth(1.0);
		ProgressAsync.SetUserData(null);
		m_ImageLogoCorner.Show(!REMOVE_DAYZ_LOGO);
		m_ImageLogoMid.Show(!REMOVE_DAYZ_LOGO);
		m_ModdedWarning.Show(!REMOVE_DAYZ_LOGO);
	}
}
modded class LoginQueueBase {
	
	override Widget Init() {
		Widget w = super.Init();
		ImageWidget imageWidgetBackground = ImageWidget.Cast( layoutRoot.FindAnyWidget("Background") );
		imageWidgetBackground.LoadImageFile(0, GetRandomLoadingScreen());
		imageWidgetBackground.SetMaskProgress(1.0);
		imageWidgetBackground.SetMaskTransitionWidth(1.0);
		return w;
	}
}
modded class LoginTimeBase {
	
	override Widget Init() {
		Widget w = super.Init();
		ImageWidget imageWidgetBackground = ImageWidget.Cast( layoutRoot.FindAnyWidget("Background") );
		imageWidgetBackground.LoadImageFile(0, GetRandomLoadingScreen());
		imageWidgetBackground.SetMaskProgress(1.0);
		imageWidgetBackground.SetMaskTransitionWidth(1.0);
		return w;
	}
}
string GetRandomLoadingScreen() {
	int hour, min, sec;
	GetHourMinuteSecond(hour, min, sec);
	int random = sec % LOADING_SCREENS_COUNT;
	return LOADING_SCREENS_PATH + (random + START_INDEX) + ".edds";
}