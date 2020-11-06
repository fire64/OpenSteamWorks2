class IClientCompatMap
{
	virtual void * BIsCompatLayerEnabled() = 0;
	virtual void EnableCompat( bool ) = 0;
	virtual void GetAvailableCompatTools( CUtlVector<CUtlString, CUtlMemory<CUtlString>> * ) = 0;
	virtual void GetAvailableCompatToolsFiltered( CUtlVector<CUtlString, CUtlMemory<CUtlString>> *, ERemoteStoragePlatform ) = 0;
	virtual void GetAvailableCompatToolsForApp( CUtlVector<CUtlString, CUtlMemory<CUtlString>> *, uint32 ) = 0;
	virtual void SpecifyCompatTool( uint32, char const*, char const*, int32 ) = 0;
	virtual void * BIsCompatibilityToolEnabled( uint32 ) = 0;
	virtual const char * GetCompatToolName( uint32 ) = 0;
	virtual void * GetCompatToolMappingPriority( uint32 ) = 0;
	virtual const char * GetCompatToolDisplayName( char const* ) = 0;
	virtual void GetWhitelistedGameList( CUtlVector<AppWhitelistSetting_t, CUtlMemory<AppWhitelistSetting_t>> * ) = 0;
	virtual void GetControllerConfigOverrides( CUtlVector<AppControllerConfigOverride_t, CUtlMemory<AppControllerConfigOverride_t>> * ) = 0;
	virtual void * StartSession( uint32 ) = 0;
	virtual void ReleaseSession( uint32, uint64 ) = 0;
};

