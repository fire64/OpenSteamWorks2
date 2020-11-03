class CAdapterSteamFriends008
{
	virtual unknown_ret GetPersonaName() = 0;
	virtual unknown_ret SetPersonaName( const char * ) = 0;
	virtual unknown_ret GetPersonaState() = 0;
	virtual unknown_ret GetFriendCount( int32 ) = 0;
	virtual unknown_ret GetFriendByIndex( int32, int32 ) = 0;
	virtual unknown_ret GetFriendRelationship( CSteamID ) = 0;
	virtual unknown_ret GetFriendPersonaState( CSteamID ) = 0;
	virtual unknown_ret GetFriendPersonaName( CSteamID ) = 0;
	virtual unknown_ret GetFriendGamePlayed( CSteamID, FriendGameInfo_t * ) = 0;
	virtual unknown_ret GetFriendPersonaNameHistory( CSteamID, int32 ) = 0;
	virtual unknown_ret HasFriend( CSteamID, int32 ) = 0;
	virtual unknown_ret GetClanCount() = 0;
	virtual unknown_ret GetClanByIndex( int32 ) = 0;
	virtual unknown_ret GetClanName( CSteamID ) = 0;
	virtual unknown_ret GetClanTag( CSteamID ) = 0;
	virtual unknown_ret GetFriendCountFromSource( CSteamID ) = 0;
	virtual unknown_ret GetFriendFromSourceByIndex( CSteamID, int32 ) = 0;
	virtual unknown_ret IsUserInSource( CSteamID, CSteamID ) = 0;
	virtual unknown_ret SetInGameVoiceSpeaking( CSteamID, bool ) = 0;
	virtual unknown_ret ActivateGameOverlay( const char * ) = 0;
	virtual unknown_ret ActivateGameOverlayToUser( const char *, CSteamID ) = 0;
	virtual unknown_ret ActivateGameOverlayToWebPage( const char * ) = 0;
	virtual unknown_ret ActivateGameOverlayToStore( uint32 ) = 0;
	virtual unknown_ret SetPlayedWith( CSteamID ) = 0;
	virtual unknown_ret ActivateGameOverlayInviteDialog( CSteamID ) = 0;
	virtual unknown_ret GetSmallFriendAvatar( CSteamID ) = 0;
	virtual unknown_ret GetMediumFriendAvatar( CSteamID ) = 0;
	virtual unknown_ret GetLargeFriendAvatar( CSteamID ) = 0;
	virtual unknown_ret RequestUserInformation( CSteamID, bool ) = 0;
	virtual unknown_ret RequestClanOfficerList( CSteamID ) = 0;
	virtual unknown_ret GetClanOwner( CSteamID ) = 0;
	virtual unknown_ret GetClanOfficerCount( CSteamID ) = 0;
	virtual unknown_ret GetClanOfficerByIndex( CSteamID, int32 ) = 0;
	virtual unknown_ret GetUserRestrictions() = 0;
};
