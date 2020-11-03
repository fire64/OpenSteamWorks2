class CAdapterSteamUserStats002
{
	virtual unknown_ret GetNumStats( CGameID ) = 0;
	virtual unknown_ret GetStatName( CGameID, uint32 ) = 0;
	virtual unknown_ret GetStatType( CGameID, const char * ) = 0;
	virtual unknown_ret GetNumAchievements( CGameID ) = 0;
	virtual unknown_ret GetAchievementName( CGameID, uint32 ) = 0;
	virtual unknown_ret RequestCurrentStats( CGameID ) = 0;
	virtual unknown_ret GetStat( CGameID, const char *, int32 * ) = 0;
	virtual unknown_ret GetStat( CGameID, const char *, float * ) = 0;
	virtual unknown_ret SetStat( CGameID, const char *, int32 ) = 0;
	virtual unknown_ret SetStat( CGameID, const char *, float ) = 0;
	virtual unknown_ret UpdateAvgRateStat( CGameID, const char *, float, double ) = 0;
	virtual unknown_ret GetAchievement( CGameID, const char *, bool * ) = 0;
	virtual unknown_ret SetAchievement( CGameID, const char * ) = 0;
	virtual unknown_ret ClearAchievement( CGameID, const char * ) = 0;
	virtual unknown_ret StoreStats( CGameID ) = 0;
	virtual unknown_ret GetAchievementIcon( CGameID, const char * ) = 0;
	virtual unknown_ret GetAchievementDisplayAttribute( CGameID, const char *, const char * ) = 0;
	virtual unknown_ret IndicateAchievementProgress( CGameID, const char *, uint32, uint32 ) = 0;
};

