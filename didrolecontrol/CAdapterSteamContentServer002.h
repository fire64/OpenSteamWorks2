class CAdapterSteamContentServer002
{
	virtual unknown_ret LogOn( uint32 ) = 0;
	virtual unknown_ret LogOff() = 0;
	virtual unknown_ret BLoggedOn() = 0;
	virtual unknown_ret SendClientContentAuthRequest( CSteamID, uint32, uint64, bool ) = 0;
	virtual unknown_ret BCheckTicket( CSteamID, uint32, const void *, uint32 ) = 0;
};

