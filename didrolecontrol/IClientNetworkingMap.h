class IClientNetworkingMap
{
	virtual uint8 SendP2PPacket( CSteamID, const void *, uint32, EP2PSend, int32 ) = 0;
	virtual uint8 IsP2PPacketAvailable( uint32 *, int32 ) = 0;
	virtual uint8 ReadP2PPacket( void *, uint32, uint32 *, CSteamID *, int32 ) = 0;
	virtual uint8 AcceptP2PSessionWithUser( CSteamID ) = 0;
	virtual uint8 CloseP2PSessionWithUser( CSteamID ) = 0;
	virtual uint8 CloseP2PChannelWithUser( CSteamID, int32 ) = 0;
	virtual uint8 GetP2PSessionState( CSteamID, P2PSessionState_t * ) = 0;
	virtual uint8 AllowP2PPacketRelay( bool ) = 0;
	virtual uint32 CreateListenSocket( int32, uint32, uint16, bool ) = 0;
	virtual uint32 CreateP2PConnectionSocket( CSteamID, int32, int32, bool ) = 0;
	virtual uint32 CreateConnectionSocket( uint32, uint16, int32 ) = 0;
	virtual uint8 DestroySocket( uint32, bool ) = 0;
	virtual uint8 DestroyListenSocket( uint32, bool ) = 0;
	virtual uint8 SendDataOnSocket( uint32, void *, uint32, bool ) = 0;
	virtual uint8 IsDataAvailableOnSocket( uint32, uint32 * ) = 0;
	virtual uint8 RetrieveDataFromSocket( uint32, void *, uint32, uint32 * ) = 0;
	virtual uint8 IsDataAvailable( uint32, uint32 *, uint32 * ) = 0;
	virtual uint8 RetrieveData( uint32, void *, uint32, uint32 *, uint32 * ) = 0;
	virtual uint8 GetSocketInfo( uint32, CSteamID *, int32 *, uint32 *, uint16 * ) = 0;
	virtual uint8 GetListenSocketInfo( uint32, uint32 *, uint16 * ) = 0;
	virtual uint32 GetSocketConnectionType( uint32 ) = 0;
	virtual uint32 GetMaxPacketSize( uint32 ) = 0;
};

