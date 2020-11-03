class IClientConfigStoreMap
{
	virtual uint8 IsSet( EConfigStore, const char * ) = 0;
	virtual uint8 GetBool( EConfigStore, const char *, bool ) = 0;
	virtual uint32 GetInt( EConfigStore, const char *, int32 ) = 0;
	virtual uint64 GetUint64( EConfigStore, const char *, uint64 ) = 0;
	virtual uint32 GetFloat( EConfigStore, const char *, float ) = 0;
	virtual const char * GetString( EConfigStore, const char *, const char * ) = 0;
	virtual uint32 GetBinary( EConfigStore, const char *, uint8 *, uint32 ) = 0;
	virtual uint32 GetBinaryWatermarked( EConfigStore, const char *, uint8 *, uint32 ) = 0;
	virtual uint8 SetBool( EConfigStore, const char *, bool ) = 0;
	virtual uint8 SetInt( EConfigStore, const char *, int32 ) = 0;
	virtual uint8 SetUint64( EConfigStore, const char *, uint64 ) = 0;
	virtual uint8 SetFloat( EConfigStore, const char *, float ) = 0;
	virtual uint8 SetString( EConfigStore, const char *, const char * ) = 0;
	virtual uint8 SetBinary( EConfigStore, const char *, const uint8 *, uint32 ) = 0;
	virtual uint8 SetBinaryWatermarked( EConfigStore, const char *, const uint8 *, uint32 ) = 0;
	virtual uint8 RemoveKey( EConfigStore, const char * ) = 0;
	virtual uint32 GetKeySerialized( EConfigStore, const char *, uint8 *, int32 ) = 0;
	virtual uint8 FlushToDisk( bool ) = 0;
};

