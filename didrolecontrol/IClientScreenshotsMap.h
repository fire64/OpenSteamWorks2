class IClientScreenshotsMap
{
	virtual const char * GetShortcutDisplayName( CGameID ) = 0;
	virtual void SetShortcutDisplayName( CGameID, const char * ) = 0;
	virtual uint32 WriteScreenshot( CGameID, void *, uint32, int32, int32 ) = 0;
	virtual uint32 AddScreenshotToLibrary( CGameID, const char *, const char *, int32, int32 ) = 0;
	virtual void TriggerScreenshot( CGameID ) = 0;
	virtual void HookScreenshots( uint32 ) = 0;
	virtual void RequestScreenshotFromGame( uint32 ) = 0;
	virtual uint8 SetLocation( CGameID, uint32, const char * ) = 0;
	virtual uint8 TagUser( CGameID, uint32, CSteamID ) = 0;
	virtual uint8 ResolvePath( CGameID, uint32, bool, char *, uint32 ) = 0;
	virtual uint32 GetFileSize( CGameID, uint32 ) = 0;
	virtual uint8 IsPersisted( CGameID, uint32 ) = 0;
	virtual uint32 GetNumGamesWithLocalScreenshots() = 0;
	virtual uint64 GetGameWithLocalScreenshots( int32 ) = 0;
	virtual uint32 GetLocalScreenshotCount( CGameID ) = 0;
	virtual uint8 GetLocalScreenshot( CGameID, int32, uint32 *, int32 *, int32 *, uint32 *, EScreenshotPrivacyState *, uint64 *, char *, uint32 ) = 0;
	virtual uint8 SetLocalScreenshotCaption( CGameID, uint32, const char * ) = 0;
	virtual uint8 SetLocalScreenshotPrivacy( CGameID, uint32, EScreenshotPrivacyState ) = 0;
	virtual uint8 StartBatch( CGameID ) = 0;
	virtual uint8 AddToBatch( uint32 ) = 0;
	virtual uint64 UploadBatch( EScreenshotPrivacyState ) = 0;
	virtual uint64 DeleteBatch( bool ) = 0;
	virtual uint8 CancelBatch() = 0;
	virtual void RecoverOldScreenshots() = 0;
	virtual uint32 GetTaggedUserCount( CGameID, uint32 ) = 0;
	virtual CSteamID GetTaggedUser( CGameID, uint32, int32 ) = 0;
	virtual uint8 GetLocation( CGameID, uint32, char *, uint32 ) = 0;
};

