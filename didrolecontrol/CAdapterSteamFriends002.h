class CAdapterSteamFriends002
{
	virtual unknown_ret GetPersonaName() = 0;
	virtual unknown_ret SetPersonaName( const char * ) = 0;
	virtual unknown_ret GetPersonaState() = 0;
	virtual unknown_ret SetPersonaState( EPersonaState ) = 0;
	virtual unknown_ret GetFriendCount( int32 ) = 0;
	virtual unknown_ret GetFriendByIndex( int32, int32 ) = 0;
	virtual unknown_ret GetFriendRelationship( CSteamID ) = 0;
	virtual unknown_ret GetFriendPersonaState( CSteamID ) = 0;
	virtual unknown_ret GetFriendPersonaName( CSteamID ) = 0;
	virtual unknown_ret SetFriendRegValue( CSteamID, const char *, const char * ) = 0;
	virtual unknown_ret GetFriendRegValue( CSteamID, const char * ) = 0;
	virtual unknown_ret GetFriendGamePlayed( CSteamID, uint64 *, uint32 *, uint16 *, uint16 * ) = 0;
	virtual unknown_ret GetFriendPersonaNameHistory( CSteamID, int32 ) = 0;
	virtual unknown_ret AddFriend( CSteamID ) = 0;
	virtual unknown_ret RemoveFriend( CSteamID ) = 0;
	virtual unknown_ret HasFriend( CSteamID, int32 ) = 0;
	virtual unknown_ret AddFriendByName( const char * ) = 0;
	virtual unknown_ret InviteFriendByEmail( const char * ) = 0;
	virtual unknown_ret GetChatMessage( CSteamID, int32, void *, int32, EChatEntryType * ) = 0;
	virtual unknown_ret SendMsgToFriend( CSteamID, EChatEntryType, const void *, int32 ) = 0;
	virtual unknown_ret GetChatIDOfChatHistoryStart( CSteamID ) = 0;
	virtual unknown_ret SetChatHistoryStart( CSteamID, int32 ) = 0;
	virtual unknown_ret ClearChatHistory( CSteamID ) = 0;
	virtual unknown_ret GetClanCount() = 0;
	virtual unknown_ret GetClanByIndex( int32 ) = 0;
	virtual unknown_ret GetClanName( CSteamID ) = 0;
	virtual unknown_ret InviteFriendToClan( CSteamID, CSteamID ) = 0;
	virtual unknown_ret AcknowledgeInviteToClan( CSteamID, bool ) = 0;
	virtual unknown_ret GetFriendCountFromSource( CSteamID ) = 0;
	virtual unknown_ret GetFriendFromSourceByIndex( CSteamID, int32 ) = 0;
};

