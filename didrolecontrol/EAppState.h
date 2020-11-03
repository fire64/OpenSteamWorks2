enum EAppState
{
	k_EAppStateInvalid = 0,	// Invalid
	k_EAppStateUninstalled,	// Uninstalled
	k_EAppStateUpdateRequired,	// Update Required
	k_EAppStateFullyInstalled = 4,	// Fully Installed
	k_EAppStateEncrypted = 8,	// Encrypted
	k_EAppStateLocked = 16,	// Locked
	k_EAppStateFilesMissing = 32,	// Files Missing
	k_EAppStateFilesCorrupt = 128,	// Files Corrupt
	k_EAppStateAppRunning = 64,	// App Running
	k_EAppStateUpdateRunning = 256,	// Update Running
	k_EAppStateUpdateStopping = 262144,	// Update Stopping
	k_EAppStateUpdatePaused = 512,	// Update Paused
	k_EAppStateUpdateStarted = 1024,	// Update Started
	k_EAppStateReconfiguring = 4096,	// Reconfiguring
	k_EAppStateDownloading = 16384,	// Downloading
	k_EAppStateStaging = 32768,	// Staging
	k_EAppStateCommitting = 65536,	// Committing
	k_EAppStateUninstalling = 2048,	// Uninstalling
	k_EAppStatePreallocating = 8192,	// Preallocating
	k_EAppStateValidating = 131072,	// Validating
}
