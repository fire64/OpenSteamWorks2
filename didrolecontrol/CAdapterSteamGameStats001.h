class CAdapterSteamGameStats001
{
	virtual unknown_ret GetNewSession( int8, uint64, int32, uint32 ) = 0;
	virtual unknown_ret EndSession( uint64, uint32, int32 ) = 0;
	virtual unknown_ret AddSessionAttributeInt( uint64, const char *, int32 ) = 0;
	virtual unknown_ret AddSessionAttributeString( uint64, const char *, const char * ) = 0;
	virtual unknown_ret AddSessionAttributeFloat( uint64, const char *, float ) = 0;
	virtual unknown_ret AddNewRow( uint64 *, uint64, const char * ) = 0;
	virtual unknown_ret CommitRow( uint64 ) = 0;
	virtual unknown_ret CommitOutstandingRows( uint64 ) = 0;
	virtual unknown_ret AddRowAttributeInt( uint64, const char *, int32 ) = 0;
	virtual unknown_ret AddRowAtributeString( uint64, const char *, const char * ) = 0;
	virtual unknown_ret AddRowAttributeFloat( uint64, const char *, float ) = 0;
	virtual unknown_ret AddSessionAttributeInt64( uint64, const char *, int64 ) = 0;
	virtual unknown_ret AddRowAttributeInt64( uint64, const char *, int64 ) = 0;
};

