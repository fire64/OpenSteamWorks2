class IClientUtilsMap
{
	unknown_ret GetInstallPath(void) = 0;
	unknown_ret GetUserBaseFolderInstallImage(void) = 0;
	unknown_ret GetManagedContentRoot(void) = 0;
	unknown_ret GetSecondsSinceAppActive(void) = 0;
	unknown_ret GetSecondsSinceComputerActive(void) = 0;
	unknown_ret GetConnectedUniverse(void) = 0;
	unknown_ret GetServerRealTime(void) = 0;
	unknown_ret GetIPCountry(void) = 0;
	unknown_ret GetImageSize(int,unsigned int *,unsigned int *) = 0;
	unknown_ret GetImageRGBA(int,unsigned char *,int) = 0;
	unknown_ret GetCSERIPPort(unsigned int *,unsigned short *) = 0;
	unknown_ret GetNumRunningApps(void) = 0;
	unknown_ret GetCurrentBatteryPower(void) = 0;
	unknown_ret SetOfflineMode(bool) = 0;
	unknown_ret GetOfflineMode(void) = 0;
	unknown_ret SetAppIDForCurrentPipe(unsigned int,bool) = 0;
	unknown_ret GetAppID(void) = 0;
	unknown_ret SetAPIDebuggingActive(bool,bool) = 0;
	unknown_ret IsAPICallCompleted(unsigned long long,bool *) = 0;
	unknown_ret GetAPICallFailureReason(unsigned long long) = 0;
	unknown_ret GetAPICallResult(unsigned long long,void *,int,int,bool *) = 0;
	unknown_ret SignalAppsToShutDown(void) = 0;
	unknown_ret GetCellID(void) = 0;
	unknown_ret BIsGlobalInstance(void) = 0;
	unknown_ret CheckFileSignature(char  const*) = 0;
	unknown_ret GetBuildID(void) = 0;
};

