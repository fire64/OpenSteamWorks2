class IClientContentServerMap
{
	virtual unknown_ret GetHSteamUser() = 0;
	virtual CSteamID GetSteamID() = 0;
	virtual void LogOn( uint32 ) = 0;
	virtual void LogOff() = 0;
	virtual uint8 BLoggedOn() = 0;
	virtual uint32 GetLogonState() = 0;
	virtual uint8 BConnected() = 0;
	virtual uint32 RaiseConnectionPriority( EConnectionPriority ) = 0;
	virtual void ResetConnectionPriority( int32 ) = 0;
	virtual void SetCellID( uint32 ) = 0;
	virtual uint8 SendClientContentAuthRequest( CSteamID, uint32, bool, uint64, bool ) = 0;
	virtual uint8 BCheckTicket( CSteamID, uint32, const void *, uint32 ) = 0;
};

