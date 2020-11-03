class CAdapterSteamClient006
{
	virtual unknown_ret CreateSteamPipe() = 0;
	virtual unknown_ret BReleaseSteamPipe( int32 ) = 0;
	virtual unknown_ret CreateGlobalUser( int32 * ) = 0;
	virtual unknown_ret ConnectToGlobalUser( int32 ) = 0;
	virtual unknown_ret CreateLocalUser( int32 * ) = 0;
	virtual unknown_ret ReleaseUser( int32, int32 ) = 0;
	virtual unknown_ret GetISteamUser( int32, int32, const char * ) = 0;
	virtual unknown_ret GetIVAC( int32 ) = 0;
	virtual unknown_ret GetISteamGameServer( int32, int32, const char * ) = 0;
	virtual unknown_ret SetLocalIPBinding( uint32, uint16 ) = 0;
	virtual unknown_ret GetUniverseName( EUniverse ) = 0;
	virtual unknown_ret GetISteamFriends( int32, int32, const char * ) = 0;
	virtual unknown_ret GetISteamUtils( int32, const char * ) = 0;
	virtual unknown_ret GetISteamBilling( int32, int32, const char * ) = 0;
	virtual unknown_ret GetISteamMatchmaking( int32, int32, const char * ) = 0;
	virtual unknown_ret GetISteamApps( int32, int32, const char * ) = 0;
	virtual unknown_ret GetISteamContentServer( int32, int32, const char * ) = 0;
	virtual unknown_ret GetISteamMasterServerUpdater( int32, int32, const char * ) = 0;
	virtual unknown_ret GetISteamMatchmakingServers( int32, int32, const char * ) = 0;
	virtual unknown_ret RunFrame() = 0;
	virtual unknown_ret GetIPCCallCount() = 0;
};

