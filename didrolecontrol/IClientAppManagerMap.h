class IClientAppManagerMap
{
	virtual uint8 LaunchApp( uint32, uint32, const char * ) = 0;
	virtual uint8 ShutdownApp( uint32, bool ) = 0;
	virtual uint32 GetAppState( uint32 ) = 0;
	virtual uint8 InstallApp( uint32 ) = 0;
	virtual uint64 GetAppSize( uint32 ) = 0;
	virtual uint32 GetAppDir( uint32, char *, uint32 ) = 0;
	virtual uint8 UninstallApp( uint32, bool ) = 0;
	virtual uint32 GetUpdateInfo( uint32, AppUpdateInfo_s * ) = 0;
	virtual uint8 SetContentLocked( uint32, bool ) = 0;
	virtual uint8 StartValidatingApp( uint32 ) = 0;
	virtual uint8 SetAppConfig( uint32, uint8 *, int32, bool ) = 0;
	virtual uint8 BIsAppUpToDate( uint32 ) = 0;
	virtual uint8 SetDownloadingEnabled( bool ) = 0;
	virtual uint8 BIsDownloadingEnabled() = 0;
	virtual uint8 GetDownloadStats( DownloadStats_s * ) = 0;
	virtual uint32 GetDownloadingAppID() = 0;
	virtual uint8 ChangeAppPriority( uint32, EAppDownloadPriority ) = 0;
	virtual uint8 AddSteam2Update( uint32 ) = 0;
	virtual uint8 RemoveSteam2Update( uint32 ) = 0;
	virtual uint8 StalledSteam2Update( uint32 ) = 0;
	virtual uint8 IsUsingLocalContentServer() = 0;
};

