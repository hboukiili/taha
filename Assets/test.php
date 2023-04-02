<?php
	if (isset ($GET['name']))
		echo $_GET['name'];
	else
	{
		?>
		<form action="test2.php" method="GET">
			<input type="text" name="name">
			<input type="submit" value="send">
		</form>
		<?php
	}
?>
