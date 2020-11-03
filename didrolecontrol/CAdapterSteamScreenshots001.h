class CAdapterSteamScreenshots001
{
	virtual unknown_ret WriteScreenshot( void *, uint32, int32, int32 ) = 0;
	virtual unknown_ret AddScreenshotToLibrary( const char *, const char *, int32, int32 ) = 0;
	virtual unknown_ret TriggerScreenshot() = 0;
	virtual unknown_ret HookScreenshots() = 0;
	virtual unknown_ret SetLocation( uint32, const char * ) = 0;
	virtual unknown_ret TagUser( uint32, CSteamID ) = 0;
};

