class CAdapterSteamMatchmaking002
{
	virtual unknown_ret GetFavoriteGameCount() = 0;
	virtual unknown_ret GetFavoriteGame( int32, uint32 *, uint32 *, uint16 *, uint16 *, uint32 *, uint32 * ) = 0;
	virtual unknown_ret AddFavoriteGame( uint32, uint32, uint16, uint16, uint32, uint32 ) = 0;
	virtual unknown_ret RemoveFavoriteGame( uint32, uint32, uint16, uint16, uint32 ) = 0;
	virtual unknown_ret RequestLobbyList() = 0;
	virtual unknown_ret GetLobbyByIndex( int32 ) = 0;
	virtual unknown_ret CreateLobby( bool ) = 0;
	virtual unknown_ret JoinLobby( CSteamID ) = 0;
	virtual unknown_ret LeaveLobby( CSteamID ) = 0;
	virtual unknown_ret InviteUserToLobby( CSteamID, CSteamID ) = 0;
	virtual unknown_ret GetNumLobbyMembers( CSteamID ) = 0;
	virtual unknown_ret GetLobbyMemberByIndex( CSteamID, int32 ) = 0;
	virtual unknown_ret GetLobbyData( CSteamID, const char * ) = 0;
	virtual unknown_ret SetLobbyData( CSteamID, const char *, const char * ) = 0;
	virtual unknown_ret GetLobbyMemberData( CSteamID, CSteamID, const char * ) = 0;
	virtual unknown_ret SetLobbyMemberData( CSteamID, const char *, const char * ) = 0;
	virtual unknown_ret SendLobbyChatMsg( CSteamID, const void *, int32 ) = 0;
	virtual unknown_ret GetLobbyChatEntry( CSteamID, int32, CSteamID*, void *, int32, EChatEntryType * ) = 0;
	virtual unknown_ret RequestLobbyData( CSteamID ) = 0;
	virtual unknown_ret SetLobbyGameServer( CSteamID, uint32, uint16, CSteamID ) = 0;
};

