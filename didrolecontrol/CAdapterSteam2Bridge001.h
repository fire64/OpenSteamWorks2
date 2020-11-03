class CAdapterSteam2Bridge001
{
	virtual unknown_ret SetSteam2Ticket( uint8 *, int32 ) = 0;
	virtual unknown_ret SetAccountName( const char * ) = 0;
	virtual unknown_ret SetPassword( const char * ) = 0;
	virtual unknown_ret SetAccountCreationTime( uint32 ) = 0;
	virtual unknown_ret CreateProcess( void *, uint32, const char *, char *, uint32, void *, char *, uint32 ) = 0;
	virtual unknown_ret GetConnectedUniverse() = 0;
	virtual unknown_ret GetIPCountry() = 0;
	virtual unknown_ret GetNumLicenses() = 0;
	virtual unknown_ret GetLicensePackageID( uint32 ) = 0;
	virtual unknown_ret GetLicenseTimeCreated( uint32 ) = 0;
	virtual unknown_ret GetLicenseTimeNextProcess( uint32 ) = 0;
	virtual unknown_ret GetLicenseMinuteLimit( uint32 ) = 0;
	virtual unknown_ret GetLicenseMinutesUsed( uint32 ) = 0;
	virtual unknown_ret GetLicensePaymentMethod( uint32 ) = 0;
	virtual unknown_ret GetLicenseFlags( uint32 ) = 0;
	virtual unknown_ret GetLicensePurchaseCountryCode( uint32 ) = 0;
	virtual unknown_ret SetOfflineMode( bool ) = 0;
};

