class CAdapterSteamGameServerStats001
{
	virtual unknown_ret RequestUserStats( CSteamID ) = 0;
	virtual unknown_ret GetUserStat( CSteamID, const char *, int32 * ) = 0;
	virtual unknown_ret GetUserStat( CSteamID, const char *, float * ) = 0;
	virtual unknown_ret GetUserAchievement( CSteamID, const char *, bool * ) = 0;
	virtual unknown_ret SetUserStat( CSteamID, const char *, int32 ) = 0;
	virtual unknown_ret SetUserStat( CSteamID, const char *, float ) = 0;
	virtual unknown_ret UpdateUserAvgRateStat( CSteamID, const char *, float, double ) = 0;
	virtual unknown_ret SetUserAchievement( CSteamID, const char * ) = 0;
	virtual unknown_ret ClearUserAchievement( CSteamID, const char * ) = 0;
	virtual unknown_ret StoreUserStats( CSteamID ) = 0;
};

