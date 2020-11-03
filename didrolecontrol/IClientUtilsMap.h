class IClientUtilsMap
{
	virtual const char * GetInstallPath() = 0;
	virtual const char * GetUserBaseFolderInstallImage() = 0;
	virtual const char * GetManagedContentRoot() = 0;
	virtual uint32 GetSecondsSinceAppActive() = 0;
	virtual uint32 GetSecondsSinceComputerActive() = 0;
	virtual uint32 GetConnectedUniverse() = 0;
	virtual uint32 GetServerRealTime() = 0;
	virtual const char * GetIPCountry() = 0;
	virtual uint8 GetImageSize( int32, uint32 *, uint32 * ) = 0;
	virtual uint8 GetImageRGBA( int32, uint8 *, int32 ) = 0;
	virtual uint8 GetCSERIPPort( uint32 *, uint16 * ) = 0;
	virtual uint32 GetNumRunningApps() = 0;
	virtual uint8 GetCurrentBatteryPower() = 0;
	virtual void SetOfflineMode( bool ) = 0;
	virtual uint8 GetOfflineMode() = 0;
	virtual uint32 SetAppIDForCurrentPipe( uint32, bool ) = 0;
	virtual uint32 GetAppID() = 0;
	virtual void SetAPIDebuggingActive( bool, bool ) = 0;
	virtual uint8 IsAPICallCompleted( uint64, bool * ) = 0;
	virtual uint32 GetAPICallFailureReason( uint64 ) = 0;
	virtual uint8 GetAPICallResult( uint64, void *, int32, int32, bool * ) = 0;
	virtual uint8 SignalAppsToShutDown() = 0;
	virtual uint32 GetCellID() = 0;
	virtual uint8 BIsGlobalInstance() = 0;
	virtual uint64 CheckFileSignature( const char * ) = 0;
	virtual uint64 GetBuildID() = 0;
};

