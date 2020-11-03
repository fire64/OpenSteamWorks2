class IClientAudioMap
{
	virtual void StartVoiceRecording() = 0;
	virtual void StopVoiceRecording() = 0;
	virtual void ResetVoiceRecording() = 0;
	virtual uint32 GetAvailableVoice( uint32 *, uint32 *, uint32 ) = 0;
	virtual uint32 GetVoice( bool, void *, uint32, uint32 *, bool, void *, uint32, uint32 *, uint32 ) = 0;
	virtual uint32 GetCompressedVoice( void *, uint32, uint32 * ) = 0;
	virtual uint32 DecompressVoice( const void *, uint32, void *, uint32, uint32 *, uint32 ) = 0;
	virtual uint32 GetVoiceOptimalSampleRate() = 0;
	virtual uint8 PlayAudio( uint32 ) = 0;
	virtual void StopAudio() = 0;
	virtual void PauseAudio() = 0;
	virtual void UnPauseAudio() = 0;
	virtual void SetPlayOrder( IClientAudio::EPlayMode ) = 0;
	virtual void ShufflePlayList() = 0;
	virtual uint32 GetPlayMode() = 0;
	virtual uint32 GetAudioHandle( const char * ) = 0;
	virtual uint8 GetAudioDetails( uint32, char *, int32, char *, int32, char *, int32 ) = 0;
	virtual uint8 GetAudioArtSize( uint32, uint32 *, uint32 * ) = 0;
	virtual uint8 GetAudioArtImage( uint32, uint8 *, int32 ) = 0;
	virtual uint32 GetPlayListCount() = 0;
	virtual uint8 AddSongToPlaylist( uint32 ) = 0;
	virtual uint8 RemoveSongFromPlaylist( uint32 ) = 0;
	virtual uint8 SaveCurrentPlaylistToFile( const char * ) = 0;
	virtual uint8 LoadPlaylistFromFile( const char * ) = 0;
	virtual uint32 GetFileSourceCount() = 0;
	virtual uint32 AddLocalFileSource( const char * ) = 0;
	virtual uint32 AddSMBFileSource( const char * ) = 0;
	virtual uint32 AddITunesFileSource( const char * ) = 0;
	virtual uint8 RemoveFileSource( uint32 ) = 0;
};

