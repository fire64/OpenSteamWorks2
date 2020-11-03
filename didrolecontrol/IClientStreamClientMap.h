class IClientStreamClientMap
{
	virtual void Launched( CGameID ) = 0;
	virtual void FocusGained( CGameID, bool ) = 0;
	virtual void FocusLost( CGameID ) = 0;
	virtual void Finished( CGameID, EResult ) = 0;
	virtual void * BGetStreamingClientConfig( CUtlBuffer * ) = 0;
	virtual void * BSaveStreamingClientConfig( CUtlBuffer * ) = 0;
	virtual const char * GetSystemInfo() = 0;
	virtual void StartStreamingSession( CGameID ) = 0;
	virtual void ReportStreamingSessionEvent( CGameID, char const* ) = 0;
	virtual void FinishStreamingSession( CGameID, char const*, char const* ) = 0;
};

