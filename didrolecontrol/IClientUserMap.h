class IClientUserMap
{
	virtual unknown_ret GetHSteamUser() = 0;
	virtual void LogOn( bool, CSteamID ) = 0;
	virtual void LogOnWithPassword( bool, const char *, const char * ) = 0;
	virtual void LogOnAndCreateNewSteamAccountIfNeeded( bool ) = 0;
	virtual void LogOff() = 0;
	virtual uint8 BLoggedOn() = 0;
	virtual uint32 GetLogonState() = 0;
	virtual uint8 BConnected() = 0;
	virtual uint8 BTryingToLogin() = 0;
	virtual CSteamID GetSteamID() = 0;
	virtual CSteamID GetConsoleSteamID() = 0;
	virtual uint8 IsVACBanned( uint32 ) = 0;
	virtual uint8 RequireShowVACBannedMessage( uint32 ) = 0;
	virtual void AcknowledgeVACBanning( uint32 ) = 0;
	virtual void SetSteam2Ticket( uint8 *, int32 ) = 0;
	virtual uint8 BExistsSteam2Ticket() = 0;
	virtual uint8 SetEmail( const char * ) = 0;
	virtual uint8 SetConfigString( EConfigSubTree, const char *, const char * ) = 0;
	virtual uint8 GetConfigString( EConfigSubTree, const char *, char *, int32 ) = 0;
	virtual uint8 SetConfigInt( EConfigSubTree, const char *, int32 ) = 0;
	virtual uint8 GetConfigInt( EConfigSubTree, const char *, int32 * ) = 0;
	virtual uint8 GetConfigStoreKeyName( EConfigSubTree, const char *, char *, int32 ) = 0;
	virtual uint32 InitiateGameConnection( void *, int32, CSteamID, CGameID, uint32, uint16, bool ) = 0;
	virtual uint32 InitiateGameConnectionOld( void *, int32, CSteamID, CGameID, uint32, uint16, bool, void *, int32 ) = 0;
	virtual void TerminateGameConnection( uint32, uint16 ) = 0;
	virtual void SetSelfAsPrimaryChatDestination() = 0;
	virtual uint8 IsPrimaryChatDestination() = 0;
	virtual void RequestLegacyCDKey( uint32 ) = 0;
	virtual uint8 SendGuestPassByEmail( const char *, uint64, bool ) = 0;
	virtual uint8 SendGuestPassByAccountID( uint32, uint64, bool ) = 0;
	virtual uint8 AckGuestPass( const char * ) = 0;
	virtual uint8 RedeemGuestPass( const char * ) = 0;
	virtual uint32 GetGuestPassToGiveCount() = 0;
	virtual uint32 GetGuestPassToRedeemCount() = 0;
	virtual uint32 GetGuestPassLastUpdateTime() = 0;
	virtual uint8 GetGuestPassToGiveInfo( uint32, uint64 *, uint32 *, uint32 *, uint32 *, uint32 *, uint32 *, char *, int32 ) = 0;
	virtual uint8 GetGuestPassToRedeemInfo( uint32, uint64 *, uint32 *, uint32 *, uint32 *, uint32 *, uint32 * ) = 0;
	virtual uint8 GetGuestPassToRedeemSenderAddress( uint32, char *, int32 ) = 0;
	virtual uint8 GetGuestPassToRedeemSenderName( uint32, char *, int32 ) = 0;
	virtual uint8 RequestGuestPassTargetList( uint64 ) = 0;
	virtual uint8 RequestGiftTargetList( uint32 ) = 0;
	virtual void AcknowledgeMessageByGID( const char * ) = 0;
	virtual uint8 SetLanguage( const char * ) = 0;
	virtual void TrackAppUsageEvent( CGameID, int32, const char * ) = 0;
	virtual uint32 RaiseConnectionPriority( EConnectionPriority ) = 0;
	virtual void ResetConnectionPriority( int32 ) = 0;
	virtual void SetAccountNameFromSteam2( const char * ) = 0;
	virtual uint8 SetPasswordFromSteam2( const char * ) = 0;
	virtual uint8 SetAccountNameForCachedCredentialLogin( const char *, bool, bool ) = 0;
	virtual void SetLoginInformation( const char *, const char *, bool ) = 0;
	virtual void SetAccountCreationTime( uint32 ) = 0;
	virtual uint8 DoesTextContainUserPassword( const char * ) = 0;
	virtual unknown_ret selete_GetCMIPAddress() = 0;
	virtual unknown_ret selete_GetP2PRelayIPAddress() = 0;
	virtual uint64 RequestWebAuthToken() = 0;
	virtual uint8 GetLanguage( char *, int32 ) = 0;
	virtual void SetCyberCafe( bool ) = 0;
	virtual void CreateAccount( const char *, const char *, const char *, int32, const char *, const char * ) = 0;
	virtual uint64 ResetPassword( const char *, const char *, const char *, const char *, const char * ) = 0;
	virtual void TrackNatTraversalStat( CNatTraversalStat  const* ) = 0;
	virtual void RefreshSteam2Login() = 0;
	virtual void RefreshSteam2LoginWithSecureOption( bool ) = 0;
	virtual uint8 Steam2IsSecureComputer() = 0;
	virtual uint32 GetPackageIDForGuestPassToRedeemByGID( uint64 ) = 0;
	virtual void TrackSteamUsageEvent( ESteamUsageEvent, const uint8 *, uint32 ) = 0;
	virtual void TrackSteamGUIUsage( const char * ) = 0;
	virtual void SetComputerInUse() = 0;
	virtual uint8 BIsGameRunning( CGameID ) = 0;
	virtual uint64 GetCurrentSessionToken() = 0;
	virtual uint8 BUpdateAppOwnershipTicket( uint32, bool, bool ) = 0;
	virtual uint8 RequestCustomBinary( const char *, uint32, bool, bool ) = 0;
	virtual uint32 GetCustomBinariesState( uint32, uint32 * ) = 0;
	virtual void SetCellID( uint32 ) = 0;
	virtual const char * GetUserBaseFolder() = 0;
	virtual uint8 GetUserDataFolder( CGameID, char *, int32 ) = 0;
	virtual uint8 GetUserConfigFolder( char *, int32 ) = 0;
	virtual uint8 GetAccountName( char *, uint32 ) = 0;
	virtual uint8 RequiresLegacyCDKey( uint32 ) = 0;
	virtual uint8 GetLegacyCDKey( uint32, char *, int32 ) = 0;
	virtual uint8 HasLegacyCDKey( uint32 ) = 0;
	virtual uint8 SetLegacyCDKey( uint32, const char * ) = 0;
	virtual void RemoveLegacyCDKey( uint32 ) = 0;
	virtual uint8 BIsAnyGameRunning() = 0;
	virtual void ChangePassword( const char *, const char * ) = 0;
	virtual void ChangeEmail( const char *, const char * ) = 0;
	virtual void ChangeSecretQuestionAndAnswer( const char *, int32, const char *, const char * ) = 0;
	virtual void SetSteam2FullASTicket( uint8 *, int32 ) = 0;
	virtual uint32 GetSteam2FullASTicket( uint8 *, int32 ) = 0;
	virtual uint8 GetEmail( char *, int32, bool * ) = 0;
	virtual void RequestForgottenPasswordEmail( const char *, const char * ) = 0;
	virtual void FindAccountsByEmailAddress( const char * ) = 0;
	virtual void FindAccountsByCdKey( const char * ) = 0;
	virtual void GetNumAccountsWithEmailAddress( const char * ) = 0;
	virtual void IsAccountNameInUse( const char * ) = 0;
	virtual void Test_FakeConnectionTimeout() = 0;
	virtual uint8 RunInstallScript( uint32 *, int32, const char *, const char *, bool ) = 0;
	virtual uint32 IsInstallScriptRunning() = 0;
	virtual uint8 GetInstallScriptString( uint32, const char *, const char *, const char *, const char *, char *, int32 ) = 0;
	virtual uint8 GetInstallScriptState( char *, uint32, uint32 *, uint32 * ) = 0;
	virtual uint8 SpawnProcess( void *, uint32, const char *, const char *, uint32, const char *, CGameID, uint32, const char *, bool ) = 0;
	virtual uint32 GetAppOwnershipTicketLength( uint32 ) = 0;
	virtual uint32 GetAppOwnershipTicketData( uint32, void *, uint32 ) = 0;
	virtual uint32 GetAppOwnershipTicketExtendedData( uint32, void *, uint32, uint32 *, uint32 *, uint32 *, uint32 * ) = 0;
	virtual uint8 GetAppDecryptionKey( uint32, void *, uint32 ) = 0;
	virtual uint32 GetMarketingMessageCount() = 0;
	virtual uint8 GetMarketingMessage( int32, uint64 *, char *, int32, EMarketingMessageFlags * ) = 0;
	virtual uint32 GetAuthSessionTicket( void *, int32, uint32 * ) = 0;
	virtual uint32 BeginAuthSession( const void *, int32, CSteamID ) = 0;
	virtual void EndAuthSession( CSteamID ) = 0;
	virtual void CancelAuthTicket( uint32 ) = 0;
	virtual uint32 IsUserSubscribedAppInTicket( CSteamID, uint32 ) = 0;
	virtual void AdvertiseGame( CGameID, CSteamID, uint32, uint16 ) = 0;
	virtual uint64 RequestEncryptedAppTicket( void *, int32 ) = 0;
	virtual uint8 GetEncryptedAppTicket( void *, int32, uint32 * ) = 0;
	virtual void SetAccountLimited( bool ) = 0;
	virtual uint8 BIsAccountLimited() = 0;
	virtual void SendValidationEmail() = 0;
	virtual uint8 BGameConnectTokensAvailable() = 0;
	virtual uint32 NumGamesRunning() = 0;
	virtual uint64 GetRunningGameID( int32 ) = 0;
	virtual uint32 GetAccountSecurityPolicyFlags() = 0;
	virtual void RequestChangeEmail( const char *, int32 ) = 0;
	virtual void ChangePasswordWithCode( const char *, const char *, const char * ) = 0;
	virtual void ChangeEmailWithCode( const char *, const char *, const char *, bool ) = 0;
	virtual void ChangeSecretQuestionAndAnswerWithCode( const char *, const char *, const char *, const char * ) = 0;
	virtual void SetClientStat( EClientStat, int64, uint32, uint32, uint32 ) = 0;
	virtual void VerifyPassword( const char * ) = 0;
	virtual uint8 BSupportUser() = 0;
	virtual uint8 BIsAppOverlayEnabled( uint32 ) = 0;
	virtual uint8 BIsBehindNAT() = 0;
	virtual uint32 GetMicroTxnAppID( uint64 ) = 0;
	virtual uint64 GetMicroTxnOrderID( uint64 ) = 0;
	virtual uint8 BGetMicroTxnPrice( uint64, CAmount *, CAmount *, bool * ) = 0;
	virtual uint32 GetMicroTxnLineItemCount( uint64 ) = 0;
	virtual uint8 BGetMicroTxnLineItem( uint64, uint32, CAmount *, uint32 *, char *, uint32 ) = 0;
	virtual uint8 BIsSandboxMicroTxn( uint64, bool * ) = 0;
	virtual uint64 AuthorizeMicroTxn( uint64, EMicroTxnAuthResponse ) = 0;
	virtual void NotifyAppMicroTxnAuthResponse( uint32, uint64, bool ) = 0;
	virtual uint8 BGetWalletBalance( bool *, CAmount * ) = 0;
	virtual uint64 RequestMicroTxnInfo( uint64 ) = 0;
	virtual uint8 BGetAppMinutesPlayed( uint32, int32 *, int32 * ) = 0;
	virtual uint8 BGetGuideURL( uint32, char *, uint32 ) = 0;
	virtual void GetClientAppListResponse_AddApp( uint32, bool, bool, bool, const char *, uint64, uint64, uint32 ) = 0;
	virtual void GetClientAppListResponse_AddDLC( uint32, bool ) = 0;
	virtual void GetClientAppListResponse_Done( uint64 ) = 0;
	virtual void PostUIResultToClientJob( uint64, EResult ) = 0;
	virtual uint8 BPromptToVerifyEmail() = 0;
	virtual uint8 BPromptToChangePassword() = 0;
	virtual uint8 BAccountLocked() = 0;
	virtual uint8 BAccountShouldShowLockUI() = 0;
	virtual uint8 BAccountLockedByIPT() = 0;
	virtual uint32 GetCountAuthedComputers() = 0;
	virtual uint8 BAccountCanUseIPT() = 0;
	virtual void ChangeTwoFactorAuthOptions( int32 ) = 0;
	virtual void Set2ndFactorAuthCode( const char * ) = 0;
	virtual uint8 BAccountHasIPTConfig() = 0;
	virtual uint8 GetEmailDomainFromLogonFailure( char *, int32 ) = 0;
	virtual uint8 BIsSubscribedApp( uint32 ) = 0;
	virtual uint64 RegisterActivationCode( const char * ) = 0;
	virtual void OptionalDLCInstallation( uint32, bool ) = 0;
	virtual void AckSystemIM( uint64 ) = 0;
};

