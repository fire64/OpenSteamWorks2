class IClientNetworkingSocketsSerializedMap
{
	virtual void SendP2PRendezvous( CSteamID, uint32, void const*, uint32 ) = 0;
	virtual void SendP2PConnectionFailure( CSteamID, uint32, uint32, char const* ) = 0;
	virtual void * GetCertAsync() = 0;
	virtual void CacheRelayTicket( void const*, uint32 ) = 0;
	virtual void * GetCachedRelayTicketCount() = 0;
	virtual void * GetCachedRelayTicket( uint32, void *, uint32 ) = 0;
	virtual void PostConnectionStateMsg( void const*, uint32 ) = 0;
	virtual void * GetSTUNServer( int32, char *, uint32 ) = 0;
	virtual void * BAllowDirectConnectToPeer( char const* ) = 0;
	virtual void TEST_ClearInMemoryCachedCredentials() = 0;
};

