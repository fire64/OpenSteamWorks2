class IClientGameCoordinatorMap
{
	virtual uint32 SendMessage( uint32, uint32, const void *, uint32 ) = 0;
	virtual uint8 IsMessageAvailable( uint32, uint32 * ) = 0;
	virtual uint32 RetrieveMessage( uint32, uint32 *, void *, uint32, uint32 * ) = 0;
};

