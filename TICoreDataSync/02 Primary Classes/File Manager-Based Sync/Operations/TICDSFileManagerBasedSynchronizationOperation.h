//
//  TICDSFileManagerBasedSynchronizationOperation.h
//  ShoppingListMac
//
//  Created by Tim Isted on 26/04/2011.
//  Copyright 2011 Tim Isted. All rights reserved.
//

#import "TICDSSynchronizationOperation.h"

/**
 `TICDSFileManagerBasedSynchronizationOperation` is a synchronization operation designed for use with a `TICDSFileManagerBasedDocumentSyncManager`.
 */

@interface TICDSFileManagerBasedSynchronizationOperation : TICDSSynchronizationOperation {
@private
    NSString *_thisDocumentSyncChangesDirectoryPath;
    NSString *_thisDocumentSyncChangesThisClientDirectoryPath;
}

/** @name Paths */

/** The path to this document's `SyncChanges` directory. */
@property (retain) NSString *thisDocumentSyncChangesDirectoryPath;

/** The path this client's directory inside this document's `SyncChanges` directory. */
@property (retain) NSString *thisDocumentSyncChangesThisClientDirectoryPath;

/** The path to a given client's `SyncChanges` directory. */
- (NSString *)pathToSyncChangesDirectoryForClientWithIdentifier:(NSString *)anIdentifier;

/** The path to a `SyncChangeSet` uploaded by a given client. */
- (NSString *)pathToSyncChangeSetWithIdentifier:(NSString *)aChangeSetIdentifier forClientWithIdentifier:(NSString *)aClientIdentifier;

@end