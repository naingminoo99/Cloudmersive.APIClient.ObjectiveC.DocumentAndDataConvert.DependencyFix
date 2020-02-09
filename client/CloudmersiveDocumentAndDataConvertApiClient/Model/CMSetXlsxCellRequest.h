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


#import "CMXlsxSpreadsheetCell.h"
#import "CMXlsxWorksheet.h"
@protocol CMXlsxSpreadsheetCell;
@class CMXlsxSpreadsheetCell;
@protocol CMXlsxWorksheet;
@class CMXlsxWorksheet;



@protocol CMSetXlsxCellRequest
@end

@interface CMSetXlsxCellRequest : CMObject

/* Optional: Bytes of the input file to operate on [optional]
 */
@property(nonatomic) NSData* inputFileBytes;
/* Optional: URL of a file to operate on as input.  This can be a public URL, or you can also use the begin-editing API to upload a document and pass in the secure URL result from that operation as the URL here (this URL is not public). [optional]
 */
@property(nonatomic) NSString* inputFileUrl;
/* Optional; Worksheet (tab) within the spreadsheet to update; leave blank to default to the first worksheet [optional]
 */
@property(nonatomic) CMXlsxWorksheet* worksheetToUpdate;
/* 0-based index of the row, 0, 1, 2, ... to set [optional]
 */
@property(nonatomic) NSNumber* rowIndex;
/* 0-based index of the cell, 0, 1, 2, ... in the row to set [optional]
 */
@property(nonatomic) NSNumber* cellIndex;
/* New Cell value to update/overwrite into the Excel XLSX spreadsheet [optional]
 */
@property(nonatomic) CMXlsxSpreadsheetCell* cellValue;

@end
