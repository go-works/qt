// +build !minimal

#pragma once

#ifndef GO_QTSQL_H
#define GO_QTSQL_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void* QSqlDatabase_QSqlDatabase_AddDatabase2(void* driver, char* connectionName);
void* QSqlDatabase_QSqlDatabase_AddDatabase(char* ty, char* connectionName);
void* QSqlDatabase_NewQSqlDatabase();
void* QSqlDatabase_NewQSqlDatabase2(void* other);
void* QSqlDatabase_NewQSqlDatabase4(void* driver);
void* QSqlDatabase_NewQSqlDatabase3(char* ty);
void* QSqlDatabase_QSqlDatabase_CloneDatabase(void* other, char* connectionName);
void QSqlDatabase_Close(void* ptr);
char QSqlDatabase_Commit(void* ptr);
char* QSqlDatabase_ConnectOptions(void* ptr);
char* QSqlDatabase_ConnectionName(void* ptr);
char* QSqlDatabase_QSqlDatabase_ConnectionNames();
char QSqlDatabase_QSqlDatabase_Contains(char* connectionName);
void* QSqlDatabase_QSqlDatabase_Database(char* connectionName, char open);
char* QSqlDatabase_DatabaseName(void* ptr);
void* QSqlDatabase_Driver(void* ptr);
char* QSqlDatabase_DriverName(void* ptr);
char* QSqlDatabase_QSqlDatabase_Drivers();
void* QSqlDatabase_Exec(void* ptr, char* query);
char* QSqlDatabase_HostName(void* ptr);
char QSqlDatabase_QSqlDatabase_IsDriverAvailable(char* name);
char QSqlDatabase_IsOpen(void* ptr);
char QSqlDatabase_IsOpenError(void* ptr);
char QSqlDatabase_IsValid(void* ptr);
void* QSqlDatabase_LastError(void* ptr);
char QSqlDatabase_Open(void* ptr);
char QSqlDatabase_Open2(void* ptr, char* user, char* password);
char* QSqlDatabase_Password(void* ptr);
int QSqlDatabase_Port(void* ptr);
void* QSqlDatabase_PrimaryIndex(void* ptr, char* tablename);
void* QSqlDatabase_Record(void* ptr, char* tablename);
void QSqlDatabase_QSqlDatabase_RegisterSqlDriver(char* name, void* creator);
void QSqlDatabase_QSqlDatabase_RemoveDatabase(char* connectionName);
char QSqlDatabase_Rollback(void* ptr);
void QSqlDatabase_SetConnectOptions(void* ptr, char* options);
void QSqlDatabase_SetDatabaseName(void* ptr, char* name);
void QSqlDatabase_SetHostName(void* ptr, char* host);
void QSqlDatabase_SetPassword(void* ptr, char* password);
void QSqlDatabase_SetPort(void* ptr, int port);
void QSqlDatabase_SetUserName(void* ptr, char* name);
char QSqlDatabase_Transaction(void* ptr);
char* QSqlDatabase_UserName(void* ptr);
void QSqlDatabase_DestroyQSqlDatabase(void* ptr);
char* QSqlDatabase_QSqlDatabase_DefaultConnection();
void* QSqlDriver_NewQSqlDriver(void* parent);
char QSqlDriver_BeginTransaction(void* ptr);
char QSqlDriver_BeginTransactionDefault(void* ptr);
void QSqlDriver_Close(void* ptr);
char QSqlDriver_CommitTransaction(void* ptr);
char QSqlDriver_CommitTransactionDefault(void* ptr);
void* QSqlDriver_CreateResult(void* ptr);
long long QSqlDriver_DbmsType(void* ptr);
char* QSqlDriver_EscapeIdentifier(void* ptr, char* identifier, long long ty);
char* QSqlDriver_EscapeIdentifierDefault(void* ptr, char* identifier, long long ty);
char* QSqlDriver_FormatValue(void* ptr, void* field, char trimStrings);
char* QSqlDriver_FormatValueDefault(void* ptr, void* field, char trimStrings);
void* QSqlDriver_Handle(void* ptr);
void* QSqlDriver_HandleDefault(void* ptr);
char QSqlDriver_HasFeature(void* ptr, long long feature);
char QSqlDriver_IsIdentifierEscaped(void* ptr, char* identifier, long long ty);
char QSqlDriver_IsIdentifierEscapedDefault(void* ptr, char* identifier, long long ty);
char QSqlDriver_IsOpen(void* ptr);
char QSqlDriver_IsOpenDefault(void* ptr);
char QSqlDriver_IsOpenError(void* ptr);
void* QSqlDriver_LastError(void* ptr);
void QSqlDriver_ConnectNotification(void* ptr);
void QSqlDriver_DisconnectNotification(void* ptr);
void QSqlDriver_Notification(void* ptr, char* name);
void QSqlDriver_ConnectNotification2(void* ptr);
void QSqlDriver_DisconnectNotification2(void* ptr);
void QSqlDriver_Notification2(void* ptr, char* name, long long source, void* payload);
char QSqlDriver_Open(void* ptr, char* db, char* user, char* password, char* host, int port, char* options);
void* QSqlDriver_PrimaryIndex(void* ptr, char* tableName);
void* QSqlDriver_PrimaryIndexDefault(void* ptr, char* tableName);
void* QSqlDriver_Record(void* ptr, char* tableName);
void* QSqlDriver_RecordDefault(void* ptr, char* tableName);
char QSqlDriver_RollbackTransaction(void* ptr);
char QSqlDriver_RollbackTransactionDefault(void* ptr);
void QSqlDriver_SetLastError(void* ptr, void* error);
void QSqlDriver_SetLastErrorDefault(void* ptr, void* error);
void QSqlDriver_SetOpen(void* ptr, char open);
void QSqlDriver_SetOpenDefault(void* ptr, char open);
void QSqlDriver_SetOpenError(void* ptr, char error);
void QSqlDriver_SetOpenErrorDefault(void* ptr, char error);
char* QSqlDriver_SqlStatement(void* ptr, long long ty, char* tableName, void* rec, char preparedStatement);
char* QSqlDriver_SqlStatementDefault(void* ptr, long long ty, char* tableName, void* rec, char preparedStatement);
char* QSqlDriver_StripDelimiters(void* ptr, char* identifier, long long ty);
char* QSqlDriver_StripDelimitersDefault(void* ptr, char* identifier, long long ty);
char QSqlDriver_SubscribeToNotification(void* ptr, char* name);
char QSqlDriver_SubscribeToNotificationDefault(void* ptr, char* name);
char* QSqlDriver_SubscribedToNotifications(void* ptr);
char* QSqlDriver_SubscribedToNotificationsDefault(void* ptr);
char QSqlDriver_UnsubscribeFromNotification(void* ptr, char* name);
char QSqlDriver_UnsubscribeFromNotificationDefault(void* ptr, char* name);
void QSqlDriver_DestroyQSqlDriver(void* ptr);
void QSqlDriver_TimerEvent(void* ptr, void* event);
void QSqlDriver_TimerEventDefault(void* ptr, void* event);
void QSqlDriver_ChildEvent(void* ptr, void* event);
void QSqlDriver_ChildEventDefault(void* ptr, void* event);
void QSqlDriver_ConnectNotify(void* ptr, void* sign);
void QSqlDriver_ConnectNotifyDefault(void* ptr, void* sign);
void QSqlDriver_CustomEvent(void* ptr, void* event);
void QSqlDriver_CustomEventDefault(void* ptr, void* event);
void QSqlDriver_DeleteLater(void* ptr);
void QSqlDriver_DeleteLaterDefault(void* ptr);
void QSqlDriver_DisconnectNotify(void* ptr, void* sign);
void QSqlDriver_DisconnectNotifyDefault(void* ptr, void* sign);
char QSqlDriver_Event(void* ptr, void* e);
char QSqlDriver_EventDefault(void* ptr, void* e);
char QSqlDriver_EventFilter(void* ptr, void* watched, void* event);
char QSqlDriver_EventFilterDefault(void* ptr, void* watched, void* event);
void* QSqlDriver_MetaObject(void* ptr);
void* QSqlDriver_MetaObjectDefault(void* ptr);
void* QSqlDriverCreatorBase_CreateObject(void* ptr);
void QSqlDriverCreatorBase_DestroyQSqlDriverCreatorBase(void* ptr);
void QSqlDriverCreatorBase_DestroyQSqlDriverCreatorBaseDefault(void* ptr);
void* QSqlDriverPlugin_NewQSqlDriverPlugin(void* parent);
void* QSqlDriverPlugin_Create(void* ptr, char* key);
void QSqlDriverPlugin_DestroyQSqlDriverPlugin(void* ptr);
void QSqlDriverPlugin_TimerEvent(void* ptr, void* event);
void QSqlDriverPlugin_TimerEventDefault(void* ptr, void* event);
void QSqlDriverPlugin_ChildEvent(void* ptr, void* event);
void QSqlDriverPlugin_ChildEventDefault(void* ptr, void* event);
void QSqlDriverPlugin_ConnectNotify(void* ptr, void* sign);
void QSqlDriverPlugin_ConnectNotifyDefault(void* ptr, void* sign);
void QSqlDriverPlugin_CustomEvent(void* ptr, void* event);
void QSqlDriverPlugin_CustomEventDefault(void* ptr, void* event);
void QSqlDriverPlugin_DeleteLater(void* ptr);
void QSqlDriverPlugin_DeleteLaterDefault(void* ptr);
void QSqlDriverPlugin_DisconnectNotify(void* ptr, void* sign);
void QSqlDriverPlugin_DisconnectNotifyDefault(void* ptr, void* sign);
char QSqlDriverPlugin_Event(void* ptr, void* e);
char QSqlDriverPlugin_EventDefault(void* ptr, void* e);
char QSqlDriverPlugin_EventFilter(void* ptr, void* watched, void* event);
char QSqlDriverPlugin_EventFilterDefault(void* ptr, void* watched, void* event);
void* QSqlDriverPlugin_MetaObject(void* ptr);
void* QSqlDriverPlugin_MetaObjectDefault(void* ptr);
void* QSqlError_NewQSqlError3(void* other);
void* QSqlError_NewQSqlError(char* driverText, char* databaseText, long long ty, char* code);
char* QSqlError_DatabaseText(void* ptr);
char* QSqlError_DriverText(void* ptr);
char QSqlError_IsValid(void* ptr);
char* QSqlError_NativeErrorCode(void* ptr);
char* QSqlError_Text(void* ptr);
long long QSqlError_Type(void* ptr);
void QSqlError_DestroyQSqlError(void* ptr);
void* QSqlField_NewQSqlField2(void* other);
void QSqlField_Clear(void* ptr);
void* QSqlField_DefaultValue(void* ptr);
char QSqlField_IsAutoValue(void* ptr);
char QSqlField_IsGenerated(void* ptr);
char QSqlField_IsNull(void* ptr);
char QSqlField_IsReadOnly(void* ptr);
char QSqlField_IsValid(void* ptr);
int QSqlField_Length(void* ptr);
char* QSqlField_Name(void* ptr);
int QSqlField_Precision(void* ptr);
long long QSqlField_RequiredStatus(void* ptr);
void QSqlField_SetAutoValue(void* ptr, char autoVal);
void QSqlField_SetDefaultValue(void* ptr, void* value);
void QSqlField_SetGenerated(void* ptr, char gen);
void QSqlField_SetLength(void* ptr, int fieldLength);
void QSqlField_SetName(void* ptr, char* name);
void QSqlField_SetPrecision(void* ptr, int precision);
void QSqlField_SetReadOnly(void* ptr, char readOnly);
void QSqlField_SetRequired(void* ptr, char required);
void QSqlField_SetRequiredStatus(void* ptr, long long required);
void QSqlField_SetValue(void* ptr, void* value);
void* QSqlField_Value(void* ptr);
void QSqlField_DestroyQSqlField(void* ptr);
void* QSqlIndex_NewQSqlIndex2(void* other);
void* QSqlIndex_NewQSqlIndex(char* cursorname, char* name);
void QSqlIndex_Append(void* ptr, void* field);
void QSqlIndex_Append2(void* ptr, void* field, char desc);
char* QSqlIndex_CursorName(void* ptr);
char QSqlIndex_IsDescending(void* ptr, int i);
char* QSqlIndex_Name(void* ptr);
void QSqlIndex_SetCursorName(void* ptr, char* cursorName);
void QSqlIndex_SetDescending(void* ptr, int i, char desc);
void QSqlIndex_SetName(void* ptr, char* name);
void QSqlIndex_DestroyQSqlIndex(void* ptr);
void* QSqlQuery_NewQSqlQuery3(void* db);
void* QSqlQuery_NewQSqlQuery(void* result);
void* QSqlQuery_NewQSqlQuery4(void* other);
void* QSqlQuery_NewQSqlQuery2(char* query, void* db);
int QSqlQuery_At(void* ptr);
void* QSqlQuery_BoundValue(void* ptr, char* placeholder);
void* QSqlQuery_BoundValue2(void* ptr, int pos);
void QSqlQuery_Clear(void* ptr);
void* QSqlQuery_Driver(void* ptr);
char QSqlQuery_Exec2(void* ptr);
char QSqlQuery_Exec(void* ptr, char* query);
char QSqlQuery_ExecBatch(void* ptr, long long mode);
char* QSqlQuery_ExecutedQuery(void* ptr);
void QSqlQuery_Finish(void* ptr);
char QSqlQuery_First(void* ptr);
char QSqlQuery_IsActive(void* ptr);
char QSqlQuery_IsForwardOnly(void* ptr);
char QSqlQuery_IsNull2(void* ptr, char* name);
char QSqlQuery_IsNull(void* ptr, int field);
char QSqlQuery_IsSelect(void* ptr);
char QSqlQuery_IsValid(void* ptr);
char QSqlQuery_Last(void* ptr);
void* QSqlQuery_LastError(void* ptr);
void* QSqlQuery_LastInsertId(void* ptr);
char* QSqlQuery_LastQuery(void* ptr);
char QSqlQuery_Next(void* ptr);
char QSqlQuery_NextResult(void* ptr);
int QSqlQuery_NumRowsAffected(void* ptr);
char QSqlQuery_Prepare(void* ptr, char* query);
char QSqlQuery_Previous(void* ptr);
void* QSqlQuery_Record(void* ptr);
void* QSqlQuery_Result(void* ptr);
char QSqlQuery_Seek(void* ptr, int index, char relative);
void QSqlQuery_SetForwardOnly(void* ptr, char forward);
int QSqlQuery_Size(void* ptr);
void* QSqlQuery_Value2(void* ptr, char* name);
void* QSqlQuery_Value(void* ptr, int index);
void QSqlQuery_DestroyQSqlQuery(void* ptr);
int QSqlQueryModel_RowCount(void* ptr, void* parent);
void* QSqlQueryModel_NewQSqlQueryModel(void* parent);
void* QSqlQueryModel_Data(void* ptr, void* item, int role);
char QSqlQueryModel_CanFetchMore(void* ptr, void* parent);
void QSqlQueryModel_Clear(void* ptr);
void QSqlQueryModel_ClearDefault(void* ptr);
int QSqlQueryModel_ColumnCount(void* ptr, void* index);
void QSqlQueryModel_FetchMore(void* ptr, void* parent);
void* QSqlQueryModel_HeaderData(void* ptr, int section, long long orientation, int role);
void* QSqlQueryModel_IndexInQuery(void* ptr, void* item);
void* QSqlQueryModel_IndexInQueryDefault(void* ptr, void* item);
char QSqlQueryModel_InsertColumns(void* ptr, int column, int count, void* parent);
void* QSqlQueryModel_LastError(void* ptr);
void* QSqlQueryModel_Query(void* ptr);
void QSqlQueryModel_QueryChange(void* ptr);
void QSqlQueryModel_QueryChangeDefault(void* ptr);
void* QSqlQueryModel_Record2(void* ptr);
void* QSqlQueryModel_Record(void* ptr, int row);
char QSqlQueryModel_RemoveColumns(void* ptr, int column, int count, void* parent);
char QSqlQueryModel_SetHeaderData(void* ptr, int section, long long orientation, void* value, int role);
void QSqlQueryModel_SetLastError(void* ptr, void* error);
void QSqlQueryModel_SetQuery(void* ptr, void* query);
void QSqlQueryModel_SetQuery2(void* ptr, char* query, void* db);
void QSqlQueryModel_DestroyQSqlQueryModel(void* ptr);
void QSqlQueryModel_DestroyQSqlQueryModelDefault(void* ptr);
void* QSqlQueryModel_Index(void* ptr, int row, int column, void* parent);
void* QSqlQueryModel_IndexDefault(void* ptr, int row, int column, void* parent);
char QSqlQueryModel_DropMimeData(void* ptr, void* data, long long action, int row, int column, void* parent);
char QSqlQueryModel_DropMimeDataDefault(void* ptr, void* data, long long action, int row, int column, void* parent);
long long QSqlQueryModel_Flags(void* ptr, void* index);
long long QSqlQueryModel_FlagsDefault(void* ptr, void* index);
void* QSqlQueryModel_Sibling(void* ptr, int row, int column, void* idx);
void* QSqlQueryModel_SiblingDefault(void* ptr, int row, int column, void* idx);
void* QSqlQueryModel_Buddy(void* ptr, void* index);
void* QSqlQueryModel_BuddyDefault(void* ptr, void* index);
char QSqlQueryModel_CanDropMimeData(void* ptr, void* data, long long action, int row, int column, void* parent);
char QSqlQueryModel_CanDropMimeDataDefault(void* ptr, void* data, long long action, int row, int column, void* parent);
char QSqlQueryModel_HasChildren(void* ptr, void* parent);
char QSqlQueryModel_HasChildrenDefault(void* ptr, void* parent);
char QSqlQueryModel_InsertRows(void* ptr, int row, int count, void* parent);
char QSqlQueryModel_InsertRowsDefault(void* ptr, int row, int count, void* parent);
char* QSqlQueryModel_MimeTypes(void* ptr);
char* QSqlQueryModel_MimeTypesDefault(void* ptr);
char QSqlQueryModel_MoveColumns(void* ptr, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);
char QSqlQueryModel_MoveColumnsDefault(void* ptr, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);
char QSqlQueryModel_MoveRows(void* ptr, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);
char QSqlQueryModel_MoveRowsDefault(void* ptr, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);
void* QSqlQueryModel_Parent(void* ptr, void* index);
void* QSqlQueryModel_ParentDefault(void* ptr, void* index);
char QSqlQueryModel_RemoveRows(void* ptr, int row, int count, void* parent);
char QSqlQueryModel_RemoveRowsDefault(void* ptr, int row, int count, void* parent);
void QSqlQueryModel_ResetInternalData(void* ptr);
void QSqlQueryModel_ResetInternalDataDefault(void* ptr);
void QSqlQueryModel_Revert(void* ptr);
void QSqlQueryModel_RevertDefault(void* ptr);
char QSqlQueryModel_SetData(void* ptr, void* index, void* value, int role);
char QSqlQueryModel_SetDataDefault(void* ptr, void* index, void* value, int role);
void QSqlQueryModel_Sort(void* ptr, int column, long long order);
void QSqlQueryModel_SortDefault(void* ptr, int column, long long order);
void* QSqlQueryModel_Span(void* ptr, void* index);
void* QSqlQueryModel_SpanDefault(void* ptr, void* index);
char QSqlQueryModel_Submit(void* ptr);
char QSqlQueryModel_SubmitDefault(void* ptr);
long long QSqlQueryModel_SupportedDragActions(void* ptr);
long long QSqlQueryModel_SupportedDragActionsDefault(void* ptr);
long long QSqlQueryModel_SupportedDropActions(void* ptr);
long long QSqlQueryModel_SupportedDropActionsDefault(void* ptr);
void QSqlQueryModel_TimerEvent(void* ptr, void* event);
void QSqlQueryModel_TimerEventDefault(void* ptr, void* event);
void QSqlQueryModel_ChildEvent(void* ptr, void* event);
void QSqlQueryModel_ChildEventDefault(void* ptr, void* event);
void QSqlQueryModel_ConnectNotify(void* ptr, void* sign);
void QSqlQueryModel_ConnectNotifyDefault(void* ptr, void* sign);
void QSqlQueryModel_CustomEvent(void* ptr, void* event);
void QSqlQueryModel_CustomEventDefault(void* ptr, void* event);
void QSqlQueryModel_DeleteLater(void* ptr);
void QSqlQueryModel_DeleteLaterDefault(void* ptr);
void QSqlQueryModel_DisconnectNotify(void* ptr, void* sign);
void QSqlQueryModel_DisconnectNotifyDefault(void* ptr, void* sign);
char QSqlQueryModel_Event(void* ptr, void* e);
char QSqlQueryModel_EventDefault(void* ptr, void* e);
char QSqlQueryModel_EventFilter(void* ptr, void* watched, void* event);
char QSqlQueryModel_EventFilterDefault(void* ptr, void* watched, void* event);
void* QSqlQueryModel_MetaObject(void* ptr);
void* QSqlQueryModel_MetaObjectDefault(void* ptr);
void* QSqlRecord_NewQSqlRecord();
void* QSqlRecord_NewQSqlRecord2(void* other);
void QSqlRecord_Append(void* ptr, void* field);
void QSqlRecord_Clear(void* ptr);
void QSqlRecord_ClearValues(void* ptr);
char QSqlRecord_Contains(void* ptr, char* name);
int QSqlRecord_Count(void* ptr);
void* QSqlRecord_Field2(void* ptr, char* name);
void* QSqlRecord_Field(void* ptr, int index);
char* QSqlRecord_FieldName(void* ptr, int index);
int QSqlRecord_IndexOf(void* ptr, char* name);
void QSqlRecord_Insert(void* ptr, int pos, void* field);
char QSqlRecord_IsEmpty(void* ptr);
char QSqlRecord_IsGenerated(void* ptr, char* name);
char QSqlRecord_IsGenerated2(void* ptr, int index);
char QSqlRecord_IsNull(void* ptr, char* name);
char QSqlRecord_IsNull2(void* ptr, int index);
void* QSqlRecord_KeyValues(void* ptr, void* keyFields);
void QSqlRecord_Remove(void* ptr, int pos);
void QSqlRecord_Replace(void* ptr, int pos, void* field);
void QSqlRecord_SetGenerated(void* ptr, char* name, char generated);
void QSqlRecord_SetGenerated2(void* ptr, int index, char generated);
void QSqlRecord_SetNull2(void* ptr, char* name);
void QSqlRecord_SetNull(void* ptr, int index);
void QSqlRecord_SetValue2(void* ptr, char* name, void* val);
void QSqlRecord_SetValue(void* ptr, int index, void* val);
void* QSqlRecord_Value2(void* ptr, char* name);
void* QSqlRecord_Value(void* ptr, int index);
void QSqlRecord_DestroyQSqlRecord(void* ptr);
void* QSqlRelation_NewQSqlRelation();
void* QSqlRelation_NewQSqlRelation2(char* tableName, char* indexColumn, char* displayColumn);
char* QSqlRelation_DisplayColumn(void* ptr);
char* QSqlRelation_IndexColumn(void* ptr);
char QSqlRelation_IsValid(void* ptr);
char* QSqlRelation_TableName(void* ptr);
void* QSqlRelationalDelegate_NewQSqlRelationalDelegate(void* parent);
void* QSqlRelationalDelegate_CreateEditor(void* ptr, void* parent, void* option, void* index);
void QSqlRelationalDelegate_SetModelData(void* ptr, void* editor, void* model, void* index);
void QSqlRelationalDelegate_DestroyQSqlRelationalDelegate(void* ptr);
void* QSqlRelationalTableModel_NewQSqlRelationalTableModel(void* parent, void* db);
void QSqlRelationalTableModel_Clear(void* ptr);
void QSqlRelationalTableModel_ClearDefault(void* ptr);
void* QSqlRelationalTableModel_Data(void* ptr, void* index, int role);
char QSqlRelationalTableModel_InsertRowIntoTable(void* ptr, void* values);
char QSqlRelationalTableModel_InsertRowIntoTableDefault(void* ptr, void* values);
char* QSqlRelationalTableModel_OrderByClause(void* ptr);
char* QSqlRelationalTableModel_OrderByClauseDefault(void* ptr);
void* QSqlRelationalTableModel_RelationModel(void* ptr, int column);
void* QSqlRelationalTableModel_RelationModelDefault(void* ptr, int column);
char QSqlRelationalTableModel_RemoveColumns(void* ptr, int column, int count, void* parent);
void QSqlRelationalTableModel_RevertRow(void* ptr, int row);
void QSqlRelationalTableModel_RevertRowDefault(void* ptr, int row);
char QSqlRelationalTableModel_Select(void* ptr);
char QSqlRelationalTableModel_SelectDefault(void* ptr);
char* QSqlRelationalTableModel_SelectStatement(void* ptr);
char* QSqlRelationalTableModel_SelectStatementDefault(void* ptr);
char QSqlRelationalTableModel_SetData(void* ptr, void* index, void* value, int role);
void QSqlRelationalTableModel_SetJoinMode(void* ptr, long long joinMode);
void QSqlRelationalTableModel_SetRelation(void* ptr, int column, void* relation);
void QSqlRelationalTableModel_SetRelationDefault(void* ptr, int column, void* relation);
void QSqlRelationalTableModel_SetTable(void* ptr, char* table);
void QSqlRelationalTableModel_SetTableDefault(void* ptr, char* table);
char QSqlRelationalTableModel_UpdateRowInTable(void* ptr, int row, void* values);
char QSqlRelationalTableModel_UpdateRowInTableDefault(void* ptr, int row, void* values);
void QSqlRelationalTableModel_DestroyQSqlRelationalTableModel(void* ptr);
void QSqlRelationalTableModel_DestroyQSqlRelationalTableModelDefault(void* ptr);
char QSqlRelationalTableModel_DeleteRowFromTable(void* ptr, int row);
char QSqlRelationalTableModel_DeleteRowFromTableDefault(void* ptr, int row);
void* QSqlRelationalTableModel_IndexInQuery(void* ptr, void* item);
void* QSqlRelationalTableModel_IndexInQueryDefault(void* ptr, void* item);
void QSqlRelationalTableModel_Revert(void* ptr);
void QSqlRelationalTableModel_RevertDefault(void* ptr);
void QSqlRelationalTableModel_RevertAll(void* ptr);
void QSqlRelationalTableModel_RevertAllDefault(void* ptr);
char QSqlRelationalTableModel_SelectRow(void* ptr, int row);
char QSqlRelationalTableModel_SelectRowDefault(void* ptr, int row);
void QSqlRelationalTableModel_SetEditStrategy(void* ptr, long long strategy);
void QSqlRelationalTableModel_SetEditStrategyDefault(void* ptr, long long strategy);
void QSqlRelationalTableModel_SetFilter(void* ptr, char* filter);
void QSqlRelationalTableModel_SetFilterDefault(void* ptr, char* filter);
void QSqlRelationalTableModel_SetSort(void* ptr, int column, long long order);
void QSqlRelationalTableModel_SetSortDefault(void* ptr, int column, long long order);
char QSqlRelationalTableModel_Submit(void* ptr);
char QSqlRelationalTableModel_SubmitDefault(void* ptr);
char QSqlRelationalTableModel_SubmitAll(void* ptr);
char QSqlRelationalTableModel_SubmitAllDefault(void* ptr);
void QSqlRelationalTableModel_QueryChange(void* ptr);
void QSqlRelationalTableModel_QueryChangeDefault(void* ptr);
void* QSqlRelationalTableModel_Index(void* ptr, int row, int column, void* parent);
void* QSqlRelationalTableModel_IndexDefault(void* ptr, int row, int column, void* parent);
char QSqlRelationalTableModel_DropMimeData(void* ptr, void* data, long long action, int row, int column, void* parent);
char QSqlRelationalTableModel_DropMimeDataDefault(void* ptr, void* data, long long action, int row, int column, void* parent);
void* QSqlRelationalTableModel_Sibling(void* ptr, int row, int column, void* idx);
void* QSqlRelationalTableModel_SiblingDefault(void* ptr, int row, int column, void* idx);
void* QSqlRelationalTableModel_Buddy(void* ptr, void* index);
void* QSqlRelationalTableModel_BuddyDefault(void* ptr, void* index);
char QSqlRelationalTableModel_CanDropMimeData(void* ptr, void* data, long long action, int row, int column, void* parent);
char QSqlRelationalTableModel_CanDropMimeDataDefault(void* ptr, void* data, long long action, int row, int column, void* parent);
char QSqlRelationalTableModel_HasChildren(void* ptr, void* parent);
char QSqlRelationalTableModel_HasChildrenDefault(void* ptr, void* parent);
char* QSqlRelationalTableModel_MimeTypes(void* ptr);
char* QSqlRelationalTableModel_MimeTypesDefault(void* ptr);
char QSqlRelationalTableModel_MoveColumns(void* ptr, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);
char QSqlRelationalTableModel_MoveColumnsDefault(void* ptr, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);
char QSqlRelationalTableModel_MoveRows(void* ptr, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);
char QSqlRelationalTableModel_MoveRowsDefault(void* ptr, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);
void* QSqlRelationalTableModel_Parent(void* ptr, void* index);
void* QSqlRelationalTableModel_ParentDefault(void* ptr, void* index);
void QSqlRelationalTableModel_ResetInternalData(void* ptr);
void QSqlRelationalTableModel_ResetInternalDataDefault(void* ptr);
void* QSqlRelationalTableModel_Span(void* ptr, void* index);
void* QSqlRelationalTableModel_SpanDefault(void* ptr, void* index);
long long QSqlRelationalTableModel_SupportedDragActions(void* ptr);
long long QSqlRelationalTableModel_SupportedDragActionsDefault(void* ptr);
long long QSqlRelationalTableModel_SupportedDropActions(void* ptr);
long long QSqlRelationalTableModel_SupportedDropActionsDefault(void* ptr);
void QSqlRelationalTableModel_TimerEvent(void* ptr, void* event);
void QSqlRelationalTableModel_TimerEventDefault(void* ptr, void* event);
void QSqlRelationalTableModel_ChildEvent(void* ptr, void* event);
void QSqlRelationalTableModel_ChildEventDefault(void* ptr, void* event);
void QSqlRelationalTableModel_ConnectNotify(void* ptr, void* sign);
void QSqlRelationalTableModel_ConnectNotifyDefault(void* ptr, void* sign);
void QSqlRelationalTableModel_CustomEvent(void* ptr, void* event);
void QSqlRelationalTableModel_CustomEventDefault(void* ptr, void* event);
void QSqlRelationalTableModel_DeleteLater(void* ptr);
void QSqlRelationalTableModel_DeleteLaterDefault(void* ptr);
void QSqlRelationalTableModel_DisconnectNotify(void* ptr, void* sign);
void QSqlRelationalTableModel_DisconnectNotifyDefault(void* ptr, void* sign);
char QSqlRelationalTableModel_Event(void* ptr, void* e);
char QSqlRelationalTableModel_EventDefault(void* ptr, void* e);
char QSqlRelationalTableModel_EventFilter(void* ptr, void* watched, void* event);
char QSqlRelationalTableModel_EventFilterDefault(void* ptr, void* watched, void* event);
void* QSqlRelationalTableModel_MetaObject(void* ptr);
void* QSqlRelationalTableModel_MetaObjectDefault(void* ptr);
void* QSqlResult_NewQSqlResult(void* db);
int QSqlResult_At(void* ptr);
long long QSqlResult_BindingSyntax(void* ptr);
void* QSqlResult_BoundValue2(void* ptr, char* placeholder);
void* QSqlResult_BoundValue(void* ptr, int index);
int QSqlResult_BoundValueCount(void* ptr);
char* QSqlResult_BoundValueName(void* ptr, int index);
void QSqlResult_Clear(void* ptr);
void* QSqlResult_Data(void* ptr, int index);
void* QSqlResult_Driver(void* ptr);
char QSqlResult_Exec(void* ptr);
char QSqlResult_ExecDefault(void* ptr);
char* QSqlResult_ExecutedQuery(void* ptr);
char QSqlResult_Fetch(void* ptr, int index);
char QSqlResult_FetchFirst(void* ptr);
char QSqlResult_FetchLast(void* ptr);
char QSqlResult_FetchNext(void* ptr);
char QSqlResult_FetchNextDefault(void* ptr);
char QSqlResult_FetchPrevious(void* ptr);
char QSqlResult_FetchPreviousDefault(void* ptr);
void* QSqlResult_Handle(void* ptr);
void* QSqlResult_HandleDefault(void* ptr);
char QSqlResult_HasOutValues(void* ptr);
char QSqlResult_IsActive(void* ptr);
char QSqlResult_IsForwardOnly(void* ptr);
char QSqlResult_IsNull(void* ptr, int index);
char QSqlResult_IsSelect(void* ptr);
char QSqlResult_IsValid(void* ptr);
void* QSqlResult_LastError(void* ptr);
void* QSqlResult_LastInsertId(void* ptr);
void* QSqlResult_LastInsertIdDefault(void* ptr);
char* QSqlResult_LastQuery(void* ptr);
int QSqlResult_NumRowsAffected(void* ptr);
char QSqlResult_Prepare(void* ptr, char* query);
char QSqlResult_PrepareDefault(void* ptr, char* query);
void* QSqlResult_Record(void* ptr);
void* QSqlResult_RecordDefault(void* ptr);
char QSqlResult_Reset(void* ptr, char* query);
void QSqlResult_ResetBindCount(void* ptr);
char QSqlResult_SavePrepare(void* ptr, char* query);
char QSqlResult_SavePrepareDefault(void* ptr, char* query);
void QSqlResult_SetActive(void* ptr, char active);
void QSqlResult_SetActiveDefault(void* ptr, char active);
void QSqlResult_SetAt(void* ptr, int index);
void QSqlResult_SetAtDefault(void* ptr, int index);
void QSqlResult_SetForwardOnly(void* ptr, char forward);
void QSqlResult_SetForwardOnlyDefault(void* ptr, char forward);
void QSqlResult_SetLastError(void* ptr, void* error);
void QSqlResult_SetLastErrorDefault(void* ptr, void* error);
void QSqlResult_SetQuery(void* ptr, char* query);
void QSqlResult_SetQueryDefault(void* ptr, char* query);
void QSqlResult_SetSelect(void* ptr, char sele);
void QSqlResult_SetSelectDefault(void* ptr, char sele);
int QSqlResult_Size(void* ptr);
void QSqlResult_DestroyQSqlResult(void* ptr);
void QSqlResult_DestroyQSqlResultDefault(void* ptr);
void* QSqlTableModel_NewQSqlTableModel(void* parent, void* db);
void QSqlTableModel_ConnectBeforeDelete(void* ptr);
void QSqlTableModel_DisconnectBeforeDelete(void* ptr);
void QSqlTableModel_BeforeDelete(void* ptr, int row);
void QSqlTableModel_ConnectBeforeInsert(void* ptr);
void QSqlTableModel_DisconnectBeforeInsert(void* ptr);
void QSqlTableModel_BeforeInsert(void* ptr, void* record);
void QSqlTableModel_ConnectBeforeUpdate(void* ptr);
void QSqlTableModel_DisconnectBeforeUpdate(void* ptr);
void QSqlTableModel_BeforeUpdate(void* ptr, int row, void* record);
void QSqlTableModel_Clear(void* ptr);
void QSqlTableModel_ClearDefault(void* ptr);
void* QSqlTableModel_Data(void* ptr, void* index, int role);
void* QSqlTableModel_Database(void* ptr);
char QSqlTableModel_DeleteRowFromTable(void* ptr, int row);
char QSqlTableModel_DeleteRowFromTableDefault(void* ptr, int row);
long long QSqlTableModel_EditStrategy(void* ptr);
int QSqlTableModel_FieldIndex(void* ptr, char* fieldName);
char* QSqlTableModel_Filter(void* ptr);
long long QSqlTableModel_Flags(void* ptr, void* index);
void* QSqlTableModel_HeaderData(void* ptr, int section, long long orientation, int role);
void* QSqlTableModel_IndexInQuery(void* ptr, void* item);
void* QSqlTableModel_IndexInQueryDefault(void* ptr, void* item);
char QSqlTableModel_InsertRecord(void* ptr, int row, void* record);
char QSqlTableModel_InsertRowIntoTable(void* ptr, void* values);
char QSqlTableModel_InsertRowIntoTableDefault(void* ptr, void* values);
char QSqlTableModel_InsertRows(void* ptr, int row, int count, void* parent);
char QSqlTableModel_IsDirty2(void* ptr);
char QSqlTableModel_IsDirty(void* ptr, void* index);
char* QSqlTableModel_OrderByClause(void* ptr);
char* QSqlTableModel_OrderByClauseDefault(void* ptr);
void* QSqlTableModel_PrimaryKey(void* ptr);
void* QSqlTableModel_PrimaryValues(void* ptr, int row);
void QSqlTableModel_ConnectPrimeInsert(void* ptr);
void QSqlTableModel_DisconnectPrimeInsert(void* ptr);
void QSqlTableModel_PrimeInsert(void* ptr, int row, void* record);
void* QSqlTableModel_Record(void* ptr);
void* QSqlTableModel_Record2(void* ptr, int row);
char QSqlTableModel_RemoveColumns(void* ptr, int column, int count, void* parent);
char QSqlTableModel_RemoveRows(void* ptr, int row, int count, void* parent);
void QSqlTableModel_Revert(void* ptr);
void QSqlTableModel_RevertAll(void* ptr);
void QSqlTableModel_RevertRow(void* ptr, int row);
void QSqlTableModel_RevertRowDefault(void* ptr, int row);
int QSqlTableModel_RowCount(void* ptr, void* parent);
char QSqlTableModel_Select(void* ptr);
char QSqlTableModel_SelectDefault(void* ptr);
char QSqlTableModel_SelectRow(void* ptr, int row);
char QSqlTableModel_SelectRowDefault(void* ptr, int row);
char* QSqlTableModel_SelectStatement(void* ptr);
char* QSqlTableModel_SelectStatementDefault(void* ptr);
char QSqlTableModel_SetData(void* ptr, void* index, void* value, int role);
void QSqlTableModel_SetEditStrategy(void* ptr, long long strategy);
void QSqlTableModel_SetEditStrategyDefault(void* ptr, long long strategy);
void QSqlTableModel_SetFilter(void* ptr, char* filter);
void QSqlTableModel_SetFilterDefault(void* ptr, char* filter);
void QSqlTableModel_SetPrimaryKey(void* ptr, void* key);
void QSqlTableModel_SetQuery(void* ptr, void* query);
char QSqlTableModel_SetRecord(void* ptr, int row, void* values);
void QSqlTableModel_SetSort(void* ptr, int column, long long order);
void QSqlTableModel_SetSortDefault(void* ptr, int column, long long order);
void QSqlTableModel_SetTable(void* ptr, char* tableName);
void QSqlTableModel_SetTableDefault(void* ptr, char* tableName);
void QSqlTableModel_Sort(void* ptr, int column, long long order);
char QSqlTableModel_Submit(void* ptr);
char QSqlTableModel_SubmitAll(void* ptr);
char* QSqlTableModel_TableName(void* ptr);
char QSqlTableModel_UpdateRowInTable(void* ptr, int row, void* values);
char QSqlTableModel_UpdateRowInTableDefault(void* ptr, int row, void* values);
void QSqlTableModel_DestroyQSqlTableModel(void* ptr);
void QSqlTableModel_DestroyQSqlTableModelDefault(void* ptr);
void QSqlTableModel_QueryChange(void* ptr);
void QSqlTableModel_QueryChangeDefault(void* ptr);
void* QSqlTableModel_Index(void* ptr, int row, int column, void* parent);
void* QSqlTableModel_IndexDefault(void* ptr, int row, int column, void* parent);
char QSqlTableModel_DropMimeData(void* ptr, void* data, long long action, int row, int column, void* parent);
char QSqlTableModel_DropMimeDataDefault(void* ptr, void* data, long long action, int row, int column, void* parent);
void* QSqlTableModel_Sibling(void* ptr, int row, int column, void* idx);
void* QSqlTableModel_SiblingDefault(void* ptr, int row, int column, void* idx);
void* QSqlTableModel_Buddy(void* ptr, void* index);
void* QSqlTableModel_BuddyDefault(void* ptr, void* index);
char QSqlTableModel_CanDropMimeData(void* ptr, void* data, long long action, int row, int column, void* parent);
char QSqlTableModel_CanDropMimeDataDefault(void* ptr, void* data, long long action, int row, int column, void* parent);
char QSqlTableModel_HasChildren(void* ptr, void* parent);
char QSqlTableModel_HasChildrenDefault(void* ptr, void* parent);
char* QSqlTableModel_MimeTypes(void* ptr);
char* QSqlTableModel_MimeTypesDefault(void* ptr);
char QSqlTableModel_MoveColumns(void* ptr, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);
char QSqlTableModel_MoveColumnsDefault(void* ptr, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);
char QSqlTableModel_MoveRows(void* ptr, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);
char QSqlTableModel_MoveRowsDefault(void* ptr, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);
void* QSqlTableModel_Parent(void* ptr, void* index);
void* QSqlTableModel_ParentDefault(void* ptr, void* index);
void QSqlTableModel_ResetInternalData(void* ptr);
void QSqlTableModel_ResetInternalDataDefault(void* ptr);
void* QSqlTableModel_Span(void* ptr, void* index);
void* QSqlTableModel_SpanDefault(void* ptr, void* index);
long long QSqlTableModel_SupportedDragActions(void* ptr);
long long QSqlTableModel_SupportedDragActionsDefault(void* ptr);
long long QSqlTableModel_SupportedDropActions(void* ptr);
long long QSqlTableModel_SupportedDropActionsDefault(void* ptr);
void QSqlTableModel_TimerEvent(void* ptr, void* event);
void QSqlTableModel_TimerEventDefault(void* ptr, void* event);
void QSqlTableModel_ChildEvent(void* ptr, void* event);
void QSqlTableModel_ChildEventDefault(void* ptr, void* event);
void QSqlTableModel_ConnectNotify(void* ptr, void* sign);
void QSqlTableModel_ConnectNotifyDefault(void* ptr, void* sign);
void QSqlTableModel_CustomEvent(void* ptr, void* event);
void QSqlTableModel_CustomEventDefault(void* ptr, void* event);
void QSqlTableModel_DeleteLater(void* ptr);
void QSqlTableModel_DeleteLaterDefault(void* ptr);
void QSqlTableModel_DisconnectNotify(void* ptr, void* sign);
void QSqlTableModel_DisconnectNotifyDefault(void* ptr, void* sign);
char QSqlTableModel_Event(void* ptr, void* e);
char QSqlTableModel_EventDefault(void* ptr, void* e);
char QSqlTableModel_EventFilter(void* ptr, void* watched, void* event);
char QSqlTableModel_EventFilterDefault(void* ptr, void* watched, void* event);
void* QSqlTableModel_MetaObject(void* ptr);
void* QSqlTableModel_MetaObjectDefault(void* ptr);

#ifdef __cplusplus
}
#endif

#endif