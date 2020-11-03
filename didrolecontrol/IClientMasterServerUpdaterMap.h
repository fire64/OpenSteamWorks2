class IClientMasterServerUpdaterMap
{
	virtual void SetActive( bool ) = 0;
	virtual void SetHeartbeatInterval( int32 ) = 0;
	virtual uint8 HandleIncomingPacket( const void *, int32, uint32, uint16 ) = 0;
	virtual uint32 GetNextOutgoingPacket( void *, int32, uint32 *, uint16 * ) = 0;
	virtual void SetBasicServerData( uint16, bool, const char *, const char *, uint16, bool, const char * ) = 0;
	virtual void ClearAllKeyValues() = 0;
	virtual void SetKeyValue( const char *, const char * ) = 0;
	virtual void NotifyShutdown() = 0;
	virtual uint8 WasRestartRequested() = 0;
	virtual void ForceHeartbeat() = 0;
	virtual uint8 AddMasterServer( const char * ) = 0;
	virtual uint8 RemoveMasterServer( const char * ) = 0;
	virtual uint32 GetNumMasterServers() = 0;
	virtual uint32 GetMasterServerAddress( int32, char *, int32 ) = 0;
};

