class IClientDepotBuilderMap
{
	virtual uint32 InitializeDepotBuildForConfigFile( const char * ) = 0;
	virtual uint8 StartBuild( uint32, bool, bool, const char * ) = 0;
	virtual uint8 BGetDepotBuildStatus( uint32, EDepotBuildStatus *, uint32 * ) = 0;
	virtual uint8 CloseDepotBuildHandle( uint32 ) = 0;
	virtual uint32 ReconstructDepotFromManifestAndChunks( const char *, const char *, const char * ) = 0;
	virtual uint8 BGetChunkCounts( uint32, uint32 *, uint32 * ) = 0;
	virtual uint8 GetManifestGIDs( uint32, uint64 *, uint64 * ) = 0;
	virtual uint32 RebaseAndBuildDepot( uint64, uint64 ) = 0;
};

