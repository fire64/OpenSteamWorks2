class IClientAppsMap
{
	virtual uint32 GetAppData( uint32, const char *, char *, int32 ) = 0;
	virtual uint32 GetInternalAppIDFromGameID( CGameID ) = 0;
	virtual void RequestAppCallbacks( bool ) = 0;
	virtual uint32 GetAppDataSection( uint32, int32, uint8 *, int32, bool ) = 0;
	virtual uint8 RequestAppInfoUpdate( const uint32 *, int32, bool ) = 0;
	virtual void NotifyAppEventTriggered( uint32, EAppEvent ) = 0;
	virtual void NotifyDlcInstalled( uint32 ) = 0;
	virtual uint32 GetDLCCount( uint32 ) = 0;
	virtual uint8 BGetDLCDataByIndex( uint32, int32, uint32 *, bool *, char *, int32 ) = 0;
};

