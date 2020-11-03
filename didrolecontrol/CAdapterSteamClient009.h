class CAdapterSteamClient009
{
	virtual unknown_ret CreateSteamPipe() = 0;
	virtual unknown_ret BReleaseSteamPipe( int32 ) = 0;
	virtual unknown_ret ConnectToGlobalUser( int32 ) = 0;
	virtual unknown_ret CreateLocalUser( int32 *, EAccountType ) = 0;
	virtual unknown_ret ReleaseUser( int32, int32 ) = 0;
	virtual unknown_ret GetISteamUser( int32, int32, const char * ) = 0;
	virtual unknown_ret GetISteamGameServer( int32, int32, const char * ) = 0;
	virtual unknown_ret SetLocalIPBinding( uint32, uint16 ) = 0;
	virtual unknown_ret GetISteamFriends( int32, int32, const char * ) = 0;
	virtual unknown_ret GetISteamUtils( int32, const char * ) = 0;
	virtual unknown_ret GetISteamMatchmaking( int32, int32, const char * ) = 0;
	virtual unknown_ret GetISteamMasterServerUpdater( int32, int32, const char * ) = 0;
	virtual unknown_ret GetISteamMatchmakingServers( int32, int32, const char * ) = 0;
	virtual unknown_ret GetISteamGenericInterface( int32, int32, const char * ) = 0;
	virtual unknown_ret GetISteamUserStats( int32, int32, const char * ) = 0;
	virtual unknown_ret GetISteamGameServerStats( int32, int32, const char * ) = 0;
	virtual unknown_ret GetISteamApps( int32, int32, const char * ) = 0;
	virtual unknown_ret GetISteamNetworking( int32, int32, const char * ) = 0;
	virtual unknown_ret GetISteamRemoteStorage( int32, int32, const char * ) = 0;
	virtual unknown_ret RunFrame() = 0;
	virtual unknown_ret GetIPCCallCount() = 0;
	virtual unknown_ret SetWarningMessageHook( void ( * )( int32, const char * ) ) = 0;
};

