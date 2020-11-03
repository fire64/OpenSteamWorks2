class CSteamInterface005
{
	virtual unknown_ret ~CSteamInterface005() = 0;
	virtual unknown_ret ~CSteamInterface005() = 0;
	virtual unknown_ret ChangePassword( const char *, const char *, TSteamError * ) = 0;
	virtual unknown_ret GetCurrentEmailAddress( char *, uint32, uint32 *, TSteamError * ) = 0;
	virtual unknown_ret ChangePersonalQA( const char *, const char *, const char *, TSteamError * ) = 0;
	virtual unknown_ret ChangeEmailAddress( const char *, TSteamError * ) = 0;
	virtual unknown_ret VerifyEmailAddress( const char *, TSteamError * ) = 0;
	virtual unknown_ret RequestEmailAddressVerificationEmail( TSteamError * ) = 0;
	virtual unknown_ret ChangeAccountName( const char *, const char *, TSteamError * ) = 0;
	virtual unknown_ret MountAppFilesystem( TSteamError * ) = 0;
	virtual unknown_ret UnmountAppFilesystem( TSteamError * ) = 0;
	virtual unknown_ret MountFilesystem( uint32, const char *, TSteamError * ) = 0;
	virtual unknown_ret UnmountFilesystem( uint32, TSteamError * ) = 0;
	virtual unknown_ret Stat( const char *, TSteamElemInfo *, TSteamError * ) = 0;
	virtual unknown_ret SetvBuf( uint32, void *, ESteamBufferMethod, uint32, TSteamError * ) = 0;
	virtual unknown_ret FlushFile( uint32, TSteamError * ) = 0;
	virtual unknown_ret OpenFile( const char *, const char *, TSteamError * ) = 0;
	virtual unknown_ret OpenFileEx( const char *, const char *, uint32 *, TSteamError * ) = 0;
	virtual unknown_ret OpenTmpFile( TSteamError * ) = 0;
	virtual unknown_ret ClearError( TSteamError * ) = 0;
	virtual unknown_ret GetVersion( char *, uint32 ) = 0;
	virtual unknown_ret GetOfflineStatus( TSteamOfflineStatus *, TSteamError * ) = 0;
	virtual unknown_ret ChangeOfflineStatus( TSteamOfflineStatus *, TSteamError * ) = 0;
	virtual unknown_ret ProcessCall( uint32, TSteamProgress *, TSteamError * ) = 0;
	virtual unknown_ret AbortCall( uint32, TSteamError * ) = 0;
	virtual unknown_ret BlockingCall( uint32, uint32, TSteamError * ) = 0;
	virtual unknown_ret SetMaxStallCount( uint32, TSteamError * ) = 0;
	virtual unknown_ret CloseFile( uint32, TSteamError * ) = 0;
	virtual unknown_ret ReadFile( void *, uint32, uint32, uint32, TSteamError * ) = 0;
	virtual unknown_ret WriteFile( const void *, uint32, uint32, uint32, TSteamError * ) = 0;
	virtual unknown_ret Getc( uint32, TSteamError * ) = 0;
	virtual unknown_ret Putc( int32, uint32, TSteamError * ) = 0;
	virtual unknown_ret SeekFile( uint32, long, ESteamSeekMethod, TSteamError * ) = 0;
	virtual unknown_ret TellFile( uint32, TSteamError * ) = 0;
	virtual unknown_ret SizeFile( uint32, TSteamError * ) = 0;
	virtual unknown_ret FindFirst( const char *, ESteamFindFilter, TSteamElemInfo *, TSteamError * ) = 0;
	virtual unknown_ret FindNext( uint32, TSteamElemInfo *, TSteamError * ) = 0;
	virtual unknown_ret FindClose( uint32, TSteamError * ) = 0;
	virtual unknown_ret GetLocalFileCopy( const char *, TSteamError * ) = 0;
	virtual unknown_ret IsFileImmediatelyAvailable( const char *, TSteamError * ) = 0;
	virtual unknown_ret HintResourceNeed( const char *, int32, TSteamError * ) = 0;
	virtual unknown_ret ForgetAllHints( TSteamError * ) = 0;
	virtual unknown_ret PauseCachePreloading( TSteamError * ) = 0;
	virtual unknown_ret ResumeCachePreloading( TSteamError * ) = 0;
	virtual unknown_ret WaitForResources( const char *, TSteamError * ) = 0;
	virtual unknown_ret StartEngine( TSteamError * ) = 0;
	virtual unknown_ret ShutdownEngine( TSteamError * ) = 0;
	virtual unknown_ret Startup( uint32, TSteamError * ) = 0;
	virtual unknown_ret Cleanup( TSteamError * ) = 0;
	virtual unknown_ret NumAppsRunning( TSteamError * ) = 0;
	virtual unknown_ret CreateAccount( const char *, const char *, const char *, const char *, const char *, const char *, int32 *, TSteamError * ) = 0;
	virtual unknown_ret GenerateSuggestedAccountNames( const char *, const char *, char *, uint32, uint32 *, TSteamError * ) = 0;
	virtual unknown_ret IsLoggedIn( int32 *, TSteamError * ) = 0;
	virtual unknown_ret Logout( TSteamError * ) = 0;
	virtual unknown_ret IsSecureComputer( int32 *, TSteamError * ) = 0;
	virtual unknown_ret CreateLogContext( const char * ) = 0;
	virtual unknown_ret Log( uint32, const char * ) = 0;
	virtual unknown_ret LogResourceLoadStarted( const char * ) = 0;
	virtual unknown_ret LogResourceLoadFinished( const char * ) = 0;
	virtual unknown_ret RefreshLogin( const char *, int32, TSteamError * ) = 0;
	virtual unknown_ret VerifyPassword( const char *, int32 *, TSteamError * ) = 0;
	virtual unknown_ret GetUserType( uint32 *, TSteamError * ) = 0;
	virtual unknown_ret GetAppStats( TSteamAppStats *, TSteamError * ) = 0;
	virtual unknown_ret IsAccountNameInUse( const char *, int32 *, TSteamError * ) = 0;
	virtual unknown_ret GetAppIds( uint32 *, uint32, TSteamError * ) = 0;
	virtual unknown_ret GetSubscriptionStats( TSteamSubscriptionStats *, TSteamError * ) = 0;
	virtual unknown_ret RefreshAccountInfo( int32, TSteamError * ) = 0;
	virtual unknown_ret Subscribe( uint32, TSteamSubscriptionBillingInfo  const*, TSteamError * ) = 0;
	virtual unknown_ret Unsubscribe( uint32, TSteamError * ) = 0;
	virtual unknown_ret GetSubscriptionReceipt( uint32, TSteamSubscriptionReceipt *, TSteamError * ) = 0;
	virtual unknown_ret GetAccountStatus( uint32 *, TSteamError * ) = 0;
	virtual unknown_ret SetUser( const char *, int32 *, TSteamError * ) = 0;
	virtual unknown_ret GetUser( char *, uint32, uint32 *, TSteamGlobalUserID *, TSteamError * ) = 0;
	virtual unknown_ret Login( const char *, const char *, int32, TSteamError * ) = 0;
	virtual unknown_ret AckSubscriptionReceipt( uint32, TSteamError * ) = 0;
	virtual unknown_ret IsAppSubscribed( uint32, int32 *, int32 *, TSteamError * ) = 0;
	virtual unknown_ret GetSubscriptionIds( uint32 *, uint32, TSteamError * ) = 0;
	virtual unknown_ret EnumerateSubscription( uint32, TSteamSubscription *, TSteamError * ) = 0;
	virtual unknown_ret EnumerateSubscriptionDiscount( uint32, uint32, TSteamSubscriptionDiscount *, TSteamError * ) = 0;
	virtual unknown_ret EnumerateSubscriptionDiscountQualifier( uint32, uint32, uint32, TSteamDiscountQualifier *, TSteamError * ) = 0;
	virtual unknown_ret EnumerateApp( uint32, TSteamApp *, TSteamError * ) = 0;
	virtual unknown_ret EnumerateAppLaunchOption( uint32, uint32, TSteamAppLaunchOption *, TSteamError * ) = 0;
	virtual unknown_ret DeleteAccount( TSteamError * ) = 0;
	virtual unknown_ret EnumerateAppIcon( uint32, uint32, uint8 *, uint32, uint32 *, TSteamError * ) = 0;
	virtual unknown_ret LaunchApp( uint32, uint32, const char *, TSteamError * ) = 0;
	virtual unknown_ret GetCacheFilePath( uint32, char *, uint32, uint32 *, TSteamError * ) = 0;
	virtual unknown_ret EnumerateAppVersion( uint32, uint32, TSteamAppVersion *, TSteamError * ) = 0;
	virtual unknown_ret EnumerateAppDependency( uint32, uint32, TSteamAppDependencyInfo *, TSteamError * ) = 0;
	virtual unknown_ret StartLoadingCache( uint32, TSteamError * ) = 0;
	virtual unknown_ret InsertAppDependency( uint32, uint32, TSteamAppDependencyInfo *, TSteamError * ) = 0;
	virtual unknown_ret RemoveAppDependency( uint32, uint32, TSteamError * ) = 0;
	virtual unknown_ret FindApp( const char *, uint32 *, TSteamError * ) = 0;
	virtual unknown_ret GetAppDependencies( uint32, uint32 *, uint32, TSteamError * ) = 0;
	virtual unknown_ret IsSubscribed( uint32, int32 *, int32 *, TSteamError * ) = 0;
	virtual unknown_ret GetAppUserDefinedInfo( uint32, const char *, char *, uint32, uint32 *, TSteamError * ) = 0;
	virtual unknown_ret WaitForAppReadyToLaunch( uint32, TSteamError * ) = 0;
	virtual unknown_ret IsCacheLoadingEnabled( uint32, int32 *, TSteamError * ) = 0;
	virtual unknown_ret StopLoadingCache( uint32, TSteamError * ) = 0;
	virtual unknown_ret GetEncryptedUserIDTicket( const void *, uint32, void *, uint32, uint32 *, TSteamError * ) = 0;
	virtual unknown_ret FlushCache( uint32, TSteamError * ) = 0;
	virtual unknown_ret RepairOrDecryptCaches( uint32, int32, TSteamError * ) = 0;
	virtual unknown_ret LoadCacheFromDir( uint32, const char *, TSteamError * ) = 0;
	virtual unknown_ret GetCacheDefaultDirectory( char *, TSteamError * ) = 0;
	virtual unknown_ret SetCacheDefaultDirectory( const char *, TSteamError * ) = 0;
	virtual unknown_ret GetAppDir( uint32, char *, TSteamError * ) = 0;
	virtual unknown_ret MoveApp( uint32, const char *, TSteamError * ) = 0;
	virtual unknown_ret GetAppCacheSize( uint32, uint32 *, TSteamError * ) = 0;
	virtual unknown_ret SetAppCacheSize( uint32, uint32, TSteamError * ) = 0;
	virtual unknown_ret SetAppVersion( uint32, uint32, TSteamError * ) = 0;
	virtual unknown_ret Uninstall( TSteamError * ) = 0;
	virtual unknown_ret SetNotificationCallback( void ( * )( ESteamNotificationCallbackEvent, uint32 ), TSteamError * ) = 0;
	virtual unknown_ret ChangeForgottenPassword( const char *, const char *, const char *, const char *, int32 *, TSteamError * ) = 0;
	virtual unknown_ret RequestForgottenPasswordEmail( const char *, char *, TSteamError * ) = 0;
	virtual unknown_ret RequestAccountsByEmailAddressEmail( const char *, TSteamError * ) = 0;
	virtual unknown_ret RequestAccountsByCdKeyEmail( const char *, TSteamError * ) = 0;
	virtual unknown_ret GetNumAccountsWithEmailAddress( const char *, uint32 *, TSteamError * ) = 0;
	virtual unknown_ret UpdateAccountBillingInfo( TSteamPaymentCardInfo  const*, TSteamError * ) = 0;
	virtual unknown_ret UpdateSubscriptionBillingInfo( uint32, TSteamSubscriptionBillingInfo  const*, TSteamError * ) = 0;
	virtual unknown_ret GetSponsorUrl( uint32, char *, uint32, uint32 *, TSteamError * ) = 0;
	virtual unknown_ret GetContentServerInfo( uint32, uint32 *, uint32 *, TSteamError * ) = 0;
	virtual unknown_ret GetAppUpdateStats( uint32, ESteamAppUpdateStatsQueryType, TSteamUpdateStats *, TSteamError * ) = 0;
	virtual unknown_ret GetTotalUpdateStats( TSteamUpdateStats *, TSteamError * ) = 0;
	virtual unknown_ret CreateCachePreloaders( TSteamError * ) = 0;
	virtual unknown_ret Win32SetMiniDumpComment( const char * ) = 0;
	virtual unknown_ret Win32SetMiniDumpSourceControlId( uint32 ) = 0;
	virtual unknown_ret Win32SetMiniDumpEnableFullMemory() = 0;
	virtual unknown_ret Win32WriteMiniDump( const char *, const char *, const char *, const char *, uint32 ) = 0;
	virtual unknown_ret GetCurrentAppId( uint32 *, TSteamError * ) = 0;
	virtual unknown_ret GetAppPurchaseCountry( uint32, char *, uint32, int32 *, TSteamError * ) = 0;
	virtual unknown_ret GetLocalClientVersion( uint32 *, uint32 *, TSteamError * ) = 0;
	virtual unknown_ret IsFileNeededByCache( uint32, const char *, uint32, TSteamError * ) = 0;
	virtual unknown_ret LoadFileToCache( uint32, const char *, const void *, uint32, uint32, TSteamError * ) = 0;
	virtual unknown_ret GetCacheDecryptionKey( uint32, char *, uint32, uint32 *, TSteamError * ) = 0;
	virtual unknown_ret GetSubscriptionExtendedInfo( uint32, const char *, char *, uint32, uint32 *, TSteamError * ) = 0;
	virtual unknown_ret GetSubscriptionPurchaseCountry( uint32, char *, uint32, int32 *, TSteamError * ) = 0;
	virtual unknown_ret GetAppUserDefinedRecord( uint32, void ( * )( const char *, const char *, void * ), void *, TSteamError * ) = 0;
};

