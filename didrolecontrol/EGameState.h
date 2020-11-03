enum EGameState
{
	k_EGameStateEStateUnknown = 0,	// eStateUnknown
	k_EGameStateEStateUnavailable,	// eStateUnavailable
	k_EGameStateEStateComingSoonNoPreload,	// eStateComingSoonNoPreload
	k_EGameStateEStatePreloadOnly,	// eStatePreloadOnly
	k_EGameStateEStatePreorderOrPreload,	// eStatePreorderOrPreload
	k_EGameStateEStatePreorderThenPreload,	// eStatePreorderThenPreload
	k_EGameStateEStateJustReleased,	// eStateJustReleased
	k_EGameStateEStateAvailable,	// eStateAvailable
	k_EGameStateEStateTool,	// eStateTool
	k_EGameStateEStateThirdPartyMod = 10,	// eStateThirdPartyMod
	k_EGameStateEStateAvailablePreloadable = 9,	// eStateAvailablePreloadable
	k_EGameStateEStateThirdPartyMod,	// eStateThirdPartyMod
}
