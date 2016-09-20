/*
 * connection.h
 *
 *  Created on: Sep 19, 2016
 *      Author: siva
 */

#ifndef CONNECTION_H_
#define CONNECTION_H_
/*
 * Flag that tells whether the underlying network connection is
 * present or not.
 */
int is_connected(void);

/*
 * Returns true if there’s room for writing new data into the
 * connection.
 */
int can_write(void);

/*
 * Returns true if there’s data to be read from the connection.
 */
int can_read(void);

#endif /* CONNECTION_H_ */
