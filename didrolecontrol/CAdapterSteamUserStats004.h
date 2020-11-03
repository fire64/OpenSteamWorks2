class CAdapterSteamUserStats004
{
	virtual unknown_ret RequestCurrentStats() = 0;
	virtual unknown_ret GetStat( const char *, int32 * ) = 0;
	virtual unknown_ret GetStat( const char *, float * ) = 0;
	virtual unknown_ret SetStat( const char *, int32 ) = 0;
	virtual unknown_ret SetStat( const char *, float ) = 0;
	virtual unknown_ret UpdateAvgRateStat( const char *, float, double ) = 0;
	virtual unknown_ret GetAchievement( const char *, bool * ) = 0;
	virtual unknown_ret SetAchievement( const char * ) = 0;
	virtual unknown_ret ClearAchievement( const char * ) = 0;
	virtual unknown_ret StoreStats() = 0;
	virtual unknown_ret GetAchievementIcon( const char * ) = 0;
	virtual unknown_ret GetAchievementDisplayAttribute( const char *, const char * ) = 0;
	virtual unknown_ret IndicateAchievementProgress( const char *, uint32, uint32 ) = 0;
	virtual unknown_ret RequestUserStats( CSteamID ) = 0;
	virtual unknown_ret GetUserStat( CSteamID, const char *, int32 * ) = 0;
	virtual unknown_ret GetUserStat( CSteamID, const char *, float * ) = 0;
	virtual unknown_ret GetUserAchievement( CSteamID, const char *, bool * ) = 0;
	virtual unknown_ret ResetAllStats( bool ) = 0;
};

