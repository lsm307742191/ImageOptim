//
//  Worker.h
//
//  Created by porneL on 23.wrz.07.
//

#import <Cocoa/Cocoa.h>
#import "Worker.h"
#import "../File.h"

@interface CommandWorker : Worker {
    NSTask *task;
}


-(BOOL)parseLine:(NSString *)line;
-(void)parseLinesFromHandle:(NSFileHandle *)commandHandle;

// initialises field task with path and arguments
-(void)taskWithPath:(NSString*)path arguments:(NSArray *)arguments;

-(long)readNumberAfter:(NSString *)str inLine:(NSString *)line;

-(void)launchTask;

// gets the path of the executable
-(NSString *)executablePathForKey:(NSString *)prefsName bundleName:(NSString *)resourceName;

-(BOOL)taskForKey:(NSString *)key bundleName:(NSString *)resourceName arguments:(NSMutableArray *)args;

-(BOOL)runWithTempPath:(NSURL*)tempPath;
-(NSString *)pathForExecutableName:(NSString *)resourceName;
@end
