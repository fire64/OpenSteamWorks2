class CAdapterSteamContentServer001
{
	virtual unknown_ret LogOn( uint32 ) = 0;
	virtual unknown_ret LogOff() = 0;
	virtual unknown_ret BLoggedOn() = 0;
	virtual unknown_ret SendClientContentAuthRequest( CSteamID, uint32 ) = 0;
};

