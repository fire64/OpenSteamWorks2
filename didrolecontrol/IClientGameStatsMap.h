class IClientGameStatsMap
{
	virtual uint64 GetNewSession( int8, uint64, int32, uint32 ) = 0;
	virtual uint64 EndSession( uint64, uint32, int16 ) = 0;
	virtual uint32 AddSessionAttributeInt( uint64, const char *, int32 ) = 0;
	virtual uint32 AddSessionAttributeString( uint64, const char *, const char * ) = 0;
	virtual uint32 AddSessionAttributeFloat( uint64, const char *, float ) = 0;
	virtual uint32 AddNewRow( uint64 *, uint64, const char * ) = 0;
	virtual uint32 CommitRow( uint64 ) = 0;
	virtual uint32 CommitOutstandingRows( uint64 ) = 0;
	virtual uint32 AddRowAttributeInt( uint64, const char *, int32 ) = 0;
	virtual uint32 AddRowAttributeString( uint64, const char *, const char * ) = 0;
	virtual uint32 AddRowAttributeFloat( uint64, const char *, float ) = 0;
	virtual uint32 AddSessionAttributeInt64( uint64, const char *, int64 ) = 0;
	virtual uint32 AddRowAttributeInt64( uint64, const char *, int64 ) = 0;
};

