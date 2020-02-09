#import <Foundation/Foundation.h>
#import "CMObject.h"

/**
* convertapi
* Convert API lets you effortlessly convert file formats and types.
*
* OpenAPI spec version: v1
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "CMZipDirectory.h"
#import "CMZipFile.h"
@protocol CMZipDirectory;
@class CMZipDirectory;
@protocol CMZipFile;
@class CMZipFile;



@protocol CMZipDirectory
@end

@interface CMZipDirectory : CMObject

/* Name of this directory [optional]
 */
@property(nonatomic) NSString* directoryName;
/* Child directories contained directly in this directory [optional]
 */
@property(nonatomic) NSArray<CMZipDirectory>* directoriesInDirectory;
/* Child files contained directly in this directory [optional]
 */
@property(nonatomic) NSArray<CMZipFile>* filesInDirectory;

@end
