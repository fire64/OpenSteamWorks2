enum EAppUpdateError
{
	k_EAppUpdateErrorNoError = 0,	// No Error
	k_EAppUpdateErrorUnspecifiedError,	// Unspecified Error
	k_EAppUpdateErrorPaused,	// Paused
	k_EAppUpdateErrorCanceled,	// Canceled
	k_EAppUpdateErrorSuspended,	// Suspended
	k_EAppUpdateErrorNoSubscription,	// No subscription
	k_EAppUpdateErrorNoConnection,	// No connection
	k_EAppUpdateErrorConnectionTimeout,	// Connection timeout
	k_EAppUpdateErrorMissingDecryptionKey,	// Missing decryption key
	k_EAppUpdateErrorMissingConfiguration,	// Missing configuration
	k_EAppUpdateErrorMissingContent,	// Missing content
	k_EAppUpdateErrorDiskIOFailure,	// Disk IO failure
	k_EAppUpdateErrorNotEnoughDiskSpace,	// Not enough disk space
	k_EAppUpdateErrorCorruptGameFiles,	// Corrupt game files
}
