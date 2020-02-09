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



@protocol CMZipExtractResponse
@end

@interface CMZipExtractResponse : CMObject

/* True if the operation was successful, false otherwise [optional]
 */
@property(nonatomic) NSNumber* successful;
/* Top-level files in the root directory fo the zip file [optional]
 */
@property(nonatomic) NSArray<CMZipFile>* filesInZip;
/* Top-level directories in the root directory of the zip; directories can contain sub-directories and files [optional]
 */
@property(nonatomic) NSArray<CMZipDirectory>* directoriesInZip;

@end