class IClientGameServerStatsMap
{
	virtual uint64 RequestUserStats( CSteamID, CGameID ) = 0;
	virtual uint8 GetUserStat( CSteamID, CGameID, const char *, int32 * ) = 0;
	virtual uint8 GetUserStat( CSteamID, CGameID, const char *, float * ) = 0;
	virtual uint8 GetUserAchievement( CSteamID, CGameID, const char *, bool *, uint32 * ) = 0;
	virtual uint8 SetUserStat( CSteamID, CGameID, const char *, int32 ) = 0;
	virtual uint8 SetUserStat( CSteamID, CGameID, const char *, float ) = 0;
	virtual uint8 UpdateUserAvgRateStat( CSteamID, CGameID, const char *, float, double ) = 0;
	virtual uint8 SetUserAchievement( CSteamID, CGameID, const char * ) = 0;
	virtual uint8 ClearUserAchievement( CSteamID, CGameID, const char * ) = 0;
	virtual uint64 StoreUserStats( CSteamID, CGameID ) = 0;
	virtual void SetMaxStatsLoaded( uint32 ) = 0;
};

