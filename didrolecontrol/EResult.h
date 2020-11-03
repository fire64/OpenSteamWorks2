enum EResult
{
	k_EResultOK = 1,	// OK
	k_EResultFailure,	// Failure
	k_EResultNoConnection,	// No Connection
	k_EResultInvalidPassword = 5,	// Invalid Password
	k_EResultLoggedInElsewhere,	// Logged In Elsewhere
	k_EResultInvalidProtocol,	// Invalid Protocol
	k_EResultInvalidParameter,	// Invalid Parameter
	k_EResultFileNotFound,	// File Not Found
	k_EResultBusy,	// Busy
	k_EResultInvalidState,	// Invalid State
	k_EResultInvalidName,	// Invalid Name
	k_EResultInvalidEmail,	// Invalid Email
	k_EResultDuplicateName,	// Duplicate Name
	k_EResultAccessDenied,	// Access Denied
	k_EResultTimeout,	// Timeout
	k_EResultBanned,	// Banned
	k_EResultAccountNotFound,	// Account Not Found
	k_EResultInvalidSteamID,	// Invalid Steam ID
	k_EResultServiceUnavailable,	// Service Unavailable
	k_EResultNotLoggedOn,	// Not Logged On
	k_EResultPending,	// Pending
	k_EResultEncryptionFailure,	// Encryption Failure
	k_EResultInsufficientPrivilege,	// Insufficient Privilege
	k_EResultLimitExceeded,	// Limit exceeded
	k_EResultRequestRevoked,	// Request revoked
	k_EResultLicenseExpired,	// License expired
	k_EResultAlreadyRedeemed,	// Already Redeemed
	k_EResultDuplicatedRequest,	// Duplicated Request
	k_EResultAlreadyOwned,	// Already Owned
	k_EResultIPAddressNotFound,	// IP Address Not Found
	k_EResultPersistenceFailed,	// Persistence Failed
	k_EResultLockingFailed,	// Locking Failed
	k_EResultSessionReplaced,	// Session Replaced
	k_EResultLockingFailed = 33,	// Locking Failed
	k_EResultConnectionFailed = 35,	// Connection Failed
	k_EResultHandshakeFailed,	// Handshake Failed
	k_EResultIOOperationFailed,	// I/O Operation Failed
	k_EResultDisconnectedByRemoteHost,	// Disconnected By Remote Host
	k_EResultShoppingCartNotFound,	// Shopping Cart Not Found
	k_EResultBlocked,	// Blocked
	k_EResultIgnored,	// Ignored
	k_EResultNoMatch,	// No match
	k_EResultAccountDisabled,	// Account Disabled
	k_EResultTryAnotherCM = 48,	// Try another CM
	k_EResultPasswordRequiredToKickSession,	// Password required to kick session
	k_EResultAlreadyLoggedInElsewhere,	// Already Logged In Elsewhere
	k_EResultRequestSuspendedPaused,	// Request suspended/paused
	k_EResultRequestHasBeenCanceled,	// Request has been canceled
	k_EResultCorruptedOrUnrecoverableDataError,	// Corrupted or unrecoverable data error
	k_EResultNotEnoughFreeDiskSpace,	// Not enough free disk space
	k_EResultRemoteCallFailed,	// Remote call failed
	k_EResultPasswordIsNotSet,	// Password is not set
	k_EResultExternalAccountIsNotLinkedToASteamAccount,	// External Account is not linked to a Steam account
	k_EResultPSNTicketIsInvalid,	// PSN Ticket is invalid
	k_EResultExternalAccountLinkedToAnotherSteamAccount,	// External Account linked to another Steam account
	k_EResultRemoteFileConflict,	// Remote File Conflict
	k_EResultIllegalPassword,	// Illegal password
	k_EResultSameAsPreviousValue,	// Same as previous value
	k_EResultAccountLogonDenied,	// Account Logon Denied
	k_EResultCannotUseOldPassword,	// Cannot Use Old Password
	k_EResultInvalidLoginAuthCode,	// Invalid Login Auth Code
	k_EResultAccountLogonDeniedNoMailSent,	// Account Logon Denied no mail sent
	k_EResultHardwareNotCapableOfIPT,	// Hardware not capable of IPT
	k_EResultIPTInitError,	// IPT init error
	k_EResultOperationFailedDueToParentalControlRestrictionsForCurrentUser,	// Operation failed due to parental control restrictions for current user
	k_EResultFacebookQueryReturnedAnError,	// Facebook query returned an error
	k_EResultExpiredLoginAuthCode,	// Expired Login Auth Code
	k_EResultIPLoginRestrictionFailed,	// IP Login Restriction Failed
}
