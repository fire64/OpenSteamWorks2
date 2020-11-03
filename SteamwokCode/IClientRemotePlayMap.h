class IClientRemotePlayMap
{
	virtual void * GetSessionCount() = 0;
	virtual void * GetSessionID( int32 ) = 0;
	virtual CSteamID GetSessionSteamID( uint32 ) = 0;
	virtual const char * GetSessionClientName( uint32 ) = 0;
	virtual void * GetSessionClientFormFactor( uint32 ) = 0;
	virtual void * BGetSessionClientResolution( uint32, int32 *, int32 * ) = 0;
	virtual void * BSendRemotePlayTogetherInvite( CSteamID ) = 0;
};

