class IClientConfigStoreMap
{
	virtual void * IsSet( EConfigStore, StringView ) = 0;
	virtual void * GetBool( EConfigStore, StringView, bool ) = 0;
	virtual void * GetInt( EConfigStore, StringView, int32 ) = 0;
	virtual void * GetUint64( EConfigStore, StringView, uint64 ) = 0;
	virtual void * GetFloat( EConfigStore, StringView, float ) = 0;
	virtual const char * GetString( EConfigStore, StringView, StringView ) = 0;
	virtual void * GetBinary( EConfigStore, StringView, uint8 *, uint32 ) = 0;
	virtual void * GetBinary( EConfigStore, StringView, CUtlBuffer * ) = 0;
	virtual void * GetBinaryWatermarked( EConfigStore, StringView, uint8 *, uint32 ) = 0;
	virtual void * SetBool( EConfigStore, StringView, bool ) = 0;
	virtual void * SetInt( EConfigStore, StringView, int32 ) = 0;
	virtual void * SetUint64( EConfigStore, StringView, uint64 ) = 0;
	virtual void * SetFloat( EConfigStore, StringView, float ) = 0;
	virtual void * SetString( EConfigStore, StringView, StringView ) = 0;
	virtual void * SetBinary( EConfigStore, StringView, uint8 const*, uint32 ) = 0;
	virtual void * SetBinaryWatermarked( EConfigStore, StringView, uint8 const*, uint32 ) = 0;
	virtual void * RemoveKey( EConfigStore, StringView ) = 0;
	virtual void * GetKeySerialized( EConfigStore, StringView, uint8 *, int32 ) = 0;
	virtual void * FlushToDisk( bool ) = 0;
};

