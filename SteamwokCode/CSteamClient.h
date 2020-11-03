class CSteamClient
{
	virtual unknown_ret CreateSteamPipe() = 0;
	virtual unknown_ret BReleaseSteamPipe( int32 ) = 0;
	virtual unknown_ret CreateGlobalUser( int32 * ) = 0;
	virtual unknown_ret ConnectToGlobalUser( int32 ) = 0;
	virtual unknown_ret CreateLocalUser( int32 *, EAccountType ) = 0;
	virtual unknown_ret CreatePipeToLocalUser( int32, int32 * ) = 0;
	virtual unknown_ret ReleaseUser( int32, int32 ) = 0;
	virtual unknown_ret IsValidHSteamUserPipe( int32, int32 ) = 0;
	virtual unknown_ret GetIClientUser( int32, int32 ) = 0;
	virtual unknown_ret GetIClientGameServer( int32, int32 ) = 0;
	virtual unknown_ret SetLocalIPBinding( SteamIPAddress_t const&, uint16 ) = 0;
	virtual unknown_ret GetUniverseName( EUniverse ) = 0;
	virtual unknown_ret GetIClientFriends( int32, int32 ) = 0;
	virtual unknown_ret GetIClientUtils( int32 ) = 0;
	virtual unknown_ret GetIClientBilling( int32, int32 ) = 0;
	virtual unknown_ret GetIClientMatchmaking( int32, int32 ) = 0;
	virtual unknown_ret GetIClientApps( int32, int32 ) = 0;
	virtual unknown_ret GetIClientMatchmakingServers( int32, int32 ) = 0;
	virtual unknown_ret GetIClientGameSearch( int32, int32 ) = 0;
	virtual unknown_ret RunFrame() = 0;
	virtual unknown_ret GetIPCCallCount() = 0;
	virtual unknown_ret GetIClientUserStats( int32, int32 ) = 0;
	virtual unknown_ret GetIClientGameServerStats( int32, int32 ) = 0;
	virtual unknown_ret GetIClientNetworking( int32, int32 ) = 0;
	virtual unknown_ret GetIClientRemoteStorage( int32, int32 ) = 0;
	virtual unknown_ret GetIClientScreenshots( int32, int32 ) = 0;
	virtual unknown_ret SetWarningMessageHook( void ( * )( int32, char const* ) ) = 0;
	virtual unknown_ret GetIClientGameCoordinator( int32, int32 ) = 0;
	virtual unknown_ret SetOverlayNotificationPosition( ENotificationPosition ) = 0;
	virtual unknown_ret SetOverlayNotificationInset( int32, int32 ) = 0;
	virtual unknown_ret HookScreenshots( bool ) = 0;
	virtual unknown_ret IsScreenshotsHooked() = 0;
	virtual unknown_ret IsOverlayEnabled() = 0;
	virtual unknown_ret GetAPICallResult( int32, uint64, void *, int32, int32, bool * ) = 0;
	virtual unknown_ret GetIClientProductBuilder( int32, int32 ) = 0;
	virtual unknown_ret GetIClientDepotBuilder( int32, int32 ) = 0;
	virtual unknown_ret GetIClientNetworkDeviceManager( int32 ) = 0;
	virtual unknown_ret ConCommandInit( IConCommandBaseAccessor * ) = 0;
	virtual unknown_ret GetIClientAppManager( int32, int32 ) = 0;
	virtual unknown_ret GetIClientConfigStore( int32, int32 ) = 0;
	virtual unknown_ret BOverlayNeedsPresent() = 0;
	virtual unknown_ret GetIClientGameStats( int32, int32 ) = 0;
	virtual unknown_ret GetIClientHTTP( int32, int32 ) = 0;
	virtual unknown_ret FlushBeforeValidate() = 0;
	virtual bool BShutdownIfAllPipesClosed() = 0;
	virtual IClientAudio *GetIClientAudio( HSteamUser hSteamUser, HSteamPipe hSteamPipe ) = 0;
	virtual IClientMusic *GetIClientMusic( HSteamUser hSteamUser, HSteamPipe hSteamPipe ) = 0;
	virtual IClientUnifiedMessages *GetIClientUnifiedMessages( HSteamUser hSteamUser, HSteamPipe hSteamPipe ) = 0;
	virtual IClientController *GetIClientController( HSteamPipe hSteamPipe ) = 0;
	virtual IClientParentalSettings *GetIClientParentalSettings( HSteamUser hSteamUser, HSteamPipe hSteamPipe ) = 0;
	virtual IClientStreamLauncher *GetIClientStreamLauncher( HSteamUser hSteamUser, HSteamPipe hSteamPipe ) = 0;
	virtual IClientDeviceAuth *GetIClientDeviceAuth( HSteamUser hSteamUser, HSteamPipe hSteamPipe ) = 0;
	virtual IClientRemoteClientManager *GetIClientRemoteClientManager( HSteamPipe hSteamPipe ) = 0;
	virtual IClientStreamClient *GetIClientStreamClient( HSteamUser hSteamUser, HSteamPipe hSteamPipe ) = 0;
	virtual IClientShortcuts *GetIClientShortcuts( HSteamUser hSteamUser, HSteamPipe hSteamPipe ) = 0;
	virtual IClientUGC *GetIClientUGC(HSteamUser hSteamUser, HSteamPipe hSteamPipe) = 0;
	virtual IClientInventory *GetIClientInventory(HSteamUser hSteamUser, HSteamPipe hSteamPipe) = 0;
	virtual IClientVR *GetIClientVR(HSteamPipe hSteamPipe) = 0;
	virtual IClientGameNotifications *GetIClientGameNotifications(HSteamUser hSteamUser, HSteamPipe hSteamPipe) = 0;
	virtual IClientHTMLSurface *GetIClientHTMLSurface(HSteamUser hSteamUser, HSteamPipe hSteamPipe) = 0;
	virtual IClientVideo *GetIClientVideo(HSteamUser hSteamUser, HSteamPipe hSteamPipe) = 0;
	virtual IClientControllerSerialized *GetIClientControllerSerialized(HSteamPipe hSteamPipe) = 0;
	virtual IClientAppDisableUpdate *GetIClientAppDisableUpdate(HSteamUser hSteamUser, HSteamPipe hSteamPipe) = 0;
	virtual void Set_Client_API_CCheckCallbackRegisteredInProcess( SteamAPI_CheckCallbackRegistered_t func ) = 0;
	virtual IClientBluetoothManager *GetIClientBluetoothManager(HSteamPipe hSteamPipe) = 0;
	virtual IClientSharedConnection *GetIClientSharedConnection(HSteamUser hSteamUser, HSteamPipe hSteamPipe) = 0;
	virtual IClientShader *GetIClientShader(HSteamUser hSteamUser, HSteamPipe hSteamPipe) = 0;
	virtual IClientNetworkingSocketsSerialize *GetIClientNetworkingSocketsSerialized(HSteamUser hSteamUser, HSteamPipe hSteamPipe) = 0;
	virtual IClientCompat *GetIClientCompat(HSteamUser hSteamUser, HSteamPipe hSteamPipe) = 0;
	virtual unknown_ret SetClientCommandLine( int32, char ** ) = 0;
	virtual IClientParties *GetIClientParties(HSteamUser hSteamUser, HSteamPipe hSteamPipe) = 0;
	virtual IClientNetworkingMessages *GetIClientNetworkingMessages(HSteamUser hSteamUser, HSteamPipe hSteamPipe) = 0;
	virtual IClientNetworkingSockets *GetIClientNetworkingSockets(HSteamUser hSteamUser, HSteamPipe hSteamPipe) = 0;
	virtual IClientNetworkingUtils *GetIClientNetworkingUtils(HSteamPipe hSteamPipe) = 0;
	virtual IClientNetworkingUtilsSerialized *GetIClientNetworkingUtilsSerialized(HSteamPipe hSteamPipe) = 0;
	virtual IClientSTARInternal *GetIClientSTARInternal(HSteamUser hSteamUser, HSteamPipe hSteamPipe) = 0;
	virtual IClientRemotePlay *GetIClientRemotePlay(HSteamUser hSteamUser, HSteamPipe hSteamPipe) = 0;
	virtual unknown_ret ~CSteamClient() = 0;
	virtual unknown_ret ~CSteamClient() = 0;
	virtual unknown_ret GetIPCServerMap() = 0;
	virtual unknown_ret OnDebugTextArrived( char const* ) = 0;
	virtual unknown_ret OnThreadLocalRegistration() = 0;
	virtual unknown_ret OnThreadBuffersOverLimit() = 0;
};
