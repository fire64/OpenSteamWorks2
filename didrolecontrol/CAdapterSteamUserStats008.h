class CAdapterSteamUserStats008
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
	virtual unknown_ret GetAchievementAndUnlockTime( const char *, bool *, uint32 * ) = 0;
	virtual unknown_ret StoreStats() = 0;
	virtual unknown_ret GetAchievementIcon( const char * ) = 0;
	virtual unknown_ret GetAchievementDisplayAttribute( const char *, const char * ) = 0;
	virtual unknown_ret IndicateAchievementProgress( const char *, uint32, uint32 ) = 0;
	virtual unknown_ret RequestUserStats( CSteamID ) = 0;
	virtual unknown_ret GetUserStat( CSteamID, const char *, int32 * ) = 0;
	virtual unknown_ret GetUserStat( CSteamID, const char *, float * ) = 0;
	virtual unknown_ret GetUserAchievement( CSteamID, const char *, bool * ) = 0;
	virtual unknown_ret GetUserAchievementAndUnlockTime( CSteamID, const char *, bool *, uint32 * ) = 0;
	virtual unknown_ret ResetAllStats( bool ) = 0;
	virtual unknown_ret FindOrCreateLeaderboard( const char *, ELeaderboardSortMethod, ELeaderboardDisplayType ) = 0;
	virtual unknown_ret FindLeaderboard( const char * ) = 0;
	virtual unknown_ret GetLeaderboardName( uint64 ) = 0;
	virtual unknown_ret GetLeaderboardEntryCount( uint64 ) = 0;
	virtual unknown_ret GetLeaderboardSortMethod( uint64 ) = 0;
	virtual unknown_ret GetLeaderboardDisplayType( uint64 ) = 0;
	virtual unknown_ret DownloadLeaderboardEntries( uint64, ELeaderboardDataRequest, int32, int32 ) = 0;
	virtual unknown_ret GetDownloadedLeaderboardEntry( uint64, int32, LeaderboardEntry_t *, int32 *, int32 ) = 0;
	virtual unknown_ret UploadLeaderboardScore( uint64, ELeaderboardUploadScoreMethod, int32, const int32 *, int32 ) = 0;
	virtual unknown_ret AttachLeaderboardUGC( uint64, uint64 ) = 0;
	virtual unknown_ret GetNumberOfCurrentPlayers() = 0;
};

