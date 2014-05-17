//
//  TransactionBridge.h
//  AirBitz
//

#import "ABC.h"
#import "Wallet.h"


@interface TransactionBridge : NSObject

+ (void)loadWallets: (NSMutableArray *) arrayWallets archived:(NSMutableArray *) arrayArchivedWallets;
+ (void)reloadWallet: (Wallet *) wallet;
+ (NSMutableArray *)searchTransactionsIn: (Wallet *) wallet query:(NSString *)term addTo:(NSMutableArray *) arrayTransactions;
+ (bool)setWalletAttributes: (Wallet *) wallet;
+ (bool)storeTransaction: (Transaction *) transaction;
+ (NSString *)formatCurrency: (double) currency;
+ (NSString *)formatSatoshi: (double) bitcoin;

@end
