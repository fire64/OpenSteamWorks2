class CAdapterSteamMasterServerUpdater001
{
	virtual unknown_ret SetActive( bool ) = 0;
	virtual unknown_ret SetHeartbeatInterval( int32 ) = 0;
	virtual unknown_ret HandleIncomingPacket( const void *, int32, uint32, uint16 ) = 0;
	virtual unknown_ret GetNextOutgoingPacket( void *, int32, uint32 *, uint16 * ) = 0;
	virtual unknown_ret SetBasicServerData( uint16, bool, const char *, const char *, uint16, bool, const char * ) = 0;
	virtual unknown_ret ClearAllKeyValues() = 0;
	virtual unknown_ret SetKeyValue( const char *, const char * ) = 0;
	virtual unknown_ret NotifyShutdown() = 0;
	virtual unknown_ret WasRestartRequested() = 0;
	virtual unknown_ret ForceHeartbeat() = 0;
	virtual unknown_ret AddMasterServer( const char * ) = 0;
	virtual unknown_ret RemoveMasterServer( const char * ) = 0;
	virtual unknown_ret GetNumMasterServers() = 0;
	virtual unknown_ret GetMasterServerAddress( int32, char *, int32 ) = 0;
};

